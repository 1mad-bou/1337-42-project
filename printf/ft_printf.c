/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 08:49:51 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 11:17:46 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
static int	ft_helpper(va_list p, char c)
{
	int	len;

	len = 0;
	if (c == 's')
		len += ft_putstr(va_arg(p, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(p, int));
	else if (c == 'p')
		len += ft_hex(va_arg(p, unsigned long));
	else if (c == 'u')
		len += ft_uprint(va_arg(p, unsigned int));
	else if (c == 'x')
		len += ft_lowerhex(va_arg(p, unsigned int));
	else if (c == 'X')
		len += ft_upperhex(va_arg(p, unsigned int));
	else if (c == '%')
		len += ft_putchar('%');
	else if (c == 'c')
		len += ft_putchar(va_arg(p, int));
	else
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *c, ...)
{
	va_list	p;
	int		len;

	va_start(p, c);
	len = 0;
	if (!c || (c[0] == '%' && c[1] == '\0'))
		return (-1);
	while (*c != '\0')
	{
		if (*c == '%')
		{
			c++;
			if (*c == '\0')
				return (len);
			else
				len += ft_helpper(p,*c);
		}
		else
			len += ft_putchar(*c);
		c++;
	}
	va_end(p);
	return (len);
}
int main()
{
	char *str = NULL;
	ft_printf(NULL);
}