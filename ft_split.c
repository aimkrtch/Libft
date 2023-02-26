/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:26:55 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/01/31 18:29:21 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *str, char a)
{
	int	count;
	int	i;
	int	prev;

	i = 0;
	count = 0;
	prev = 1;
	while (str[i])
	{
		if (str[i] == a)
			prev = 1;
		else if (prev)
		{
			count++;
			if (str[i] != a)
				prev = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	arr = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
		i = 0;
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			while (*s && *s != c && ++k)
				++s;
			arr[i++] = ft_substr(s - k, 0, k);
		}
		else
			s++;
	}
	arr[i] = 0;
	return (arr);
}
