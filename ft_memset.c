/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:10:16 by kada-sil          #+#    #+#             */
/*   Updated: 2021/10/01 10:44:19 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int len)
{
	size_t	i;
	char	*str2;

	i = 0;
	str2 = (char *)s;
	while (i < len)
	{
		str2[i] = (char)c;
		i++;
	}
	return (s);
}
