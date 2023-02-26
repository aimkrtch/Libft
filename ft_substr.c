/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:18:27 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/02/15 16:05:30 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s)
		return (0);
	size = ft_strlen((char *)s);
	if (size < start || len == 0)
		i = 0;
	else if (size - start + 1 > len)
		i = len;
	else
		i = size - start;
	str = (char *)malloc((i + 1));
	if (!str || !s)
		return (NULL);
	i = -1;
	while (s[++i] && i < len && size > start)
		str[i] = s[start++];
	str[i] = '\0';
	return (str);
}
