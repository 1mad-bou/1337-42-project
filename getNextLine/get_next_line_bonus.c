/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 09:44:12 by ibouzina          #+#    #+#             */
/*   Updated: 2025/12/07 09:44:14 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	ft_end(char **line, int Nindex)
{
	char	*tmp;

	if ((*line)[Nindex + 1] != '\0')
	{
		tmp = *line;
		*line = ft_strdup(&(*line)[Nindex + 1]);
		if (!*line)
			return (free(tmp), 0);
		free(tmp);
	}
	else
	{
		free(*line);
		*line = NULL;
	}
	return (1);
}

static char	*last_helpper(char **line)
{
	int			index;
	char		*result;
	int			j;

	j = 0;
	index = where_nline(*line);
	result = malloc(index + 2);
	if (!result)
		return (NULL);
	result[index + 1] = '\0';
	while (j <= index)
	{
		result[j] = (*line)[j];
		j++;
	}
	if (!ft_end(line, index))
		return (NULL);
	return (result);
}

static ssize_t	helpper(char **line, int fd)
{
	char	*buffer;
	char	*tmp;
	ssize_t	r;

	if (BUFFER_SIZE <= 0)
		return (-1);
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	while (!is_newline(*line))
	{
		tmp = *line;
		r = read(fd, buffer, BUFFER_SIZE);
		if (r == 0)
			return (free (buffer), r);
		else if (r < 0)
			return (free(*line), *line = NULL, free(buffer), r);
		buffer[r] = '\0';
		*line = ft_strjoin(*line, buffer);
		if (!*line)
			return (free(tmp), free(buffer), 0);
		free(tmp);
	}
	return (free(buffer), 1);
}

char	*get_next_line(int fd)
{
	static char		*line[1024];
	char			*tmp;
	ssize_t			rn;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!line[fd])
		line[fd] = ft_strdup("");
	if (!line[fd])
		return (NULL);
	if (!is_newline(line[fd]))
	{	
		rn = helpper(&line[fd], fd);
		if (rn <= 0)
		{
			tmp = line[fd];
			if (!tmp || !*tmp)
				return (free(tmp), line[fd] = NULL, NULL);
			line[fd] = NULL;
			return (tmp);
		}
	}
	return (last_helpper(&line[fd]));
}
