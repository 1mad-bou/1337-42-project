/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Uprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 08:43:25 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 11:14:00 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_uprint(unsigned int nb)
{
	size_t	count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_uprint(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
	count++;
	return (count);
}
