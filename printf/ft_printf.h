/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <ibouzina@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:01:15 by ibouzina          #+#    #+#             */
/*   Updated: 2025/11/15 09:07:38 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *c, ...);
size_t	ft_putnbr(int n);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_hex(unsigned long s);
size_t	ft_strlen(char *str);
size_t	ft_uprint(unsigned int nb);
size_t	ft_lowerhex(unsigned int nb);
size_t	ft_upperhex(unsigned int nb);

#endif
