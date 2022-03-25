/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:02:58 by kada-sil          #+#    #+#             */
/*   Updated: 2021/10/03 00:50:49 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*output;
	char	c2;

	output = NULL;
	c2 = (char)c;
	while (*s)
	{
		if (*s == (c2 % 256))
			output = ((char *)s);
		s++;
	}
	if (*s == (c2 % 256))
		output = ((char *)s);
	return ((char *)output);
}
