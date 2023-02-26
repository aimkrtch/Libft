/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimkrtch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:58:40 by aimkrtch          #+#    #+#             */
/*   Updated: 2023/01/29 13:03:04 by aimkrtch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	else if (n == 0)
		len = 1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*str;

	nbr = n;
	len = ft_len(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len] = nbr % 10 + 48;
		nbr /= 10;
		len--;
	}
	return (str);
}
