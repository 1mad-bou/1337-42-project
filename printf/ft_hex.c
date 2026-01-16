/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:09:08 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 11:45:02 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_help(char *src, char *dest, size_t i)
{
	size_t	j;

	j = 0;
	dest[0] = '0';
	dest[1] = 'x';
	while (j < i)
	{
		dest[2 + j] = src[i - 1 - j];
		j++;
	}
	dest[2 + j] = '\0';
	return (dest);
}

size_t	ft_hex(unsigned long s)
{
	char	str[17];
	char	*hex;
	char	add[19];
	size_t	i;

	hex = "0123456789abcdef";
	i = 0;
	if (s == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	while (s > 0)
	{
		str[i] = hex[s % 16];
		s /= 16;
		i++;
	}
	str[i] = '\0';
	ft_help(str, add, i);
	return (ft_putstr(add));
}
