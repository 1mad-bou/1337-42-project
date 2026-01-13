/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:26:43 by ibouzina          #+#    #+#             */
/*   Updated: 2025/10/26 10:26:47 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	char	*result;
	size_t	start;
	size_t	end;
	size_t	length;

	if (!set || !s1)
		return (NULL);
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	end = len - 1;
	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	while (end > start && ft_check(s1[end], set))
		end--;
	length = end - start + 1;
	result = malloc(length + 1);
	if (!result)
		return (NULL);
	if (length > 0)
		ft_memcpy(result, s1 + start, length);
	result[length] = '\0';
	return (result);
}
