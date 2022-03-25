/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:15:22 by kada-sil          #+#    #+#             */
/*   Updated: 2021/10/05 20:59:42 by kada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int		words;
	int		control;

	words = 0;
	control = 0;
	while (*str)
	{
		if (*str != c && control == 0)
		{
			control = 1;
			words++;
		}
		else if (*str == c)
			control = 0;
		str++;
	}
	return (words);
}

static int	ft_size_words(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
		{
			return (i);
		}
		str++;
		i++;
	}
	return (i);
}

static char	**ft_to_split(char const *s, char **split, char c)
{
	int		len;
	int		control;
	int		i;
	int		j;

	i = 0;
	j = 0;
	control = 0;
	while (s[i])
	{
		if (s[i] != c && control == 0)
		{
			len = ft_size_words(s + i, c);
			split[j] = (char *) ft_calloc (sizeof(char), (len + 1));
			if (split[j] != NULL)
				ft_strlcpy (split[j], s + i, len + 1);
			control = 1;
			j++;
		}
		else if (s[i] == c)
			control = 0;
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (0);
	words = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	split = ft_to_split (s, split, c);
	split[words] = NULL;
	return (split);
}
