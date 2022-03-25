/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:35:29 by kada-sil          #+#    #+#             */
/*   Updated: 2021/10/03 11:14:53 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_itoa(long n, char *str, int *i)
{
	if (n >= 10)
	{
		ft_put_itoa(n / 10, str, i);
		ft_put_itoa(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

static size_t	ft_len_itoa(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len += 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_len_itoa(n) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		str[i++] = '-';
		str[i++] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[i++] = '-';
		n = n * -1;
	}
	ft_put_itoa(n, str, &i);
	str[i] = '\0';
	return (str);
}
