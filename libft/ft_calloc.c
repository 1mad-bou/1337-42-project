/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouzina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:58:04 by ibouzina          #+#    #+#             */
/*   Updated: 2025/10/26 11:58:07 by ibouzina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cont, size_t size)
{
	size_t	t;
	void	*ptr;

	if (size != 0 && cont > ((size_t) - 1) / size)
		return (NULL);
	t = cont * size;
	if (t == 0)
		t = 1;
	ptr = malloc(t);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, t);
	return (ptr);
}
