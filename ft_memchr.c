/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:36:07 by kada-sil          #+#    #+#             */
/*   Updated: 2021/10/03 11:23:12 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*str;

	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n-- > 0)
	{
		if (*str == c2)
			return ((void *)(str));
		else
			str++;
	}
	return (NULL);
}
