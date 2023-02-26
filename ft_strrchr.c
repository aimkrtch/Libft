/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:44:49 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/01/28 16:50:24 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	*a;

	l = ft_strlen(s);
	a = (char *)s;
	while (l > 0)
	{
		if (a[l] == (char)c)
			return ((char *)s + l);
		l--;
	}
	if (a[0] == (char)c)
		return ((char *)s + l);
	return (0);
}
