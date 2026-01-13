/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:51:21 by ibouzina          #+#    #+#             */
/*   Updated: 2025/10/26 10:51:41 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char sp)
{
	size_t	i;
	size_t	j;
	int		new_w;

	new_w = 1;
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sp)
		{
			if (new_w)
				j++;
			new_w = 0;
		}
		else
			new_w = 1;
		i++;
	}
	return (j);
}

static size_t	c_count(const char *str, char sp)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != sp)
		i++;
	return (i);
}

static void	ft_free(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
}

static int	ft_help(char **result, const char *s, char c, size_t w)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (j < w)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			len = c_count(&s[i], c);
			result[j] = ft_substr(s, i, len);
			if (!result[j])
			{
				ft_free(result, j - 1);
				return (0);
			}
			j++;
			i += len;
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	w;
	char	**result;

	if (!s)
		return (NULL);
	w = word_count(s, c);
	result = malloc(sizeof(char *) * (w + 1));
	if (!result)
		return (NULL);
	if (!ft_help(result, s, c, w))
		return (NULL);
	return (result);
}
