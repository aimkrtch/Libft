/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:47:40 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/01/25 16:36:28 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dub;

	i = 0;
	while (s1[i])
		i++;
	dub = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!dub)
		return (NULL);
	while (s1[i])
	{
		dub[i] = s1[i];
		i++;
	}
	dub[i] = '\0';
	return (dub);
}
