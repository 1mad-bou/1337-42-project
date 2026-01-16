/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:27:03 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 09:28:10 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (write(1, "(null)", 6));
	i = ft_strlen(s);
	len = write(1, s, i);
	return (len);
}
