/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:24:27 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 09:25:09 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int n)
{
	long	nbr;
	size_t	count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count += write(1, "-", 1);
	}
	if (nbr >= 10)
	{
		count += ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
	count++;
	return (count);
}
