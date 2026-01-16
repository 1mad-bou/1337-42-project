/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:16:00 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 11:14:51 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_upperhex(unsigned int nb)
{
	char	*hex;
	size_t	count;

	count = 0;
	hex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_upperhex(nb / 16);
	}
	ft_putchar(hex[nb % 16]);
	count++;
	return (count);
}
