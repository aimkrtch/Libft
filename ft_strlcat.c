/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:50:24 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/02/02 13:20:57 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;

	if (!dst && dstsize == 0)
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
		dlen = ft_strlen(dst);
		i = 0;
	while (src[i] && dlen < dstsize - 1)
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
