/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:48:17 by ibouzina          #+#    #+#             */
/*   Updated: 2025/10/23 17:48:19 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
		return ((char *)str);
	while (str[i] && i < n)
	{
		if (str[i] == find[0])
		{
			j = 0;
			while ((i + j) < n && str[i + j] == find[j] && find[j])
				j++;
			if (find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
