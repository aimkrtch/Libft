/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:36:39 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/02/08 23:35:56 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (str1 > str2)
		while (len-- > 0)
			str1[len] = str2[len];
	else
	{
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (str1);
}
