/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:39:07 by kada-sil          #+#    #+#             */
/*   Updated: 2021/09/28 18:42:05 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d_dest;
	size_t	s_src;

	i = 0;
	d_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
	if (size <= d_dest)
		return (size + s_src);
	while (dest[i])
	{
		i++;
	}
	while (*src && i < size - 1)
	{
		dest[i++] = *(src++);
		dest[i] = '\0';
	}
	return (d_dest + s_src);
}
