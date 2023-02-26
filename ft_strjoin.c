/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:57:51 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/02/04 12:58:05 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc((ft_strlen(((char *)s1) + ft_strlen((char *)s2))) + 1);
	if (!s3)
		return (0);
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		s3[i++] = s2[j];
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
