/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:15:12 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 11:15:46 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_lowerhex(unsigned int nb)
{
	char	*hex;
	size_t	count;

	count = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_lowerhex(nb / 16);
	}
	ft_putchar(hex[nb % 16]);
	count++;
	return (count);
}
