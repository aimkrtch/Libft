/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:23:01 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/02/02 13:22:07 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	if (!haystack && len == 0)
		return (0);
	l = ft_strlen((char *)needle);
	if (*needle == '\0' || needle == (NULL))
		return ((char *)haystack);
	if (*haystack == '\0' || haystack == (NULL))
		return (NULL);
	while (len)
	{
		if (!haystack || l > len--)
			return (NULL);
		if (!ft_strncmp((char *)haystack, (char *)needle, l))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
