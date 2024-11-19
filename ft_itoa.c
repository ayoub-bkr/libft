/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:49:38 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/14 14:54:55 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcul(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count++;
	else if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*m;

	nb = (long)n;
	m = (char *)malloc(calcul(nb) + 1);
	if (!m)
		return (NULL);
	i = calcul(nb) - 1;
	m[i + 1] = '\0';
	if (nb == 0)
		m[i] = 48;
	if (nb < 0)
	{
		nb *= -1;
		m[0] = '-';
	}
	while (nb > 0)
	{
		m[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (m);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s", ft_itoa(-2147483648));
}
*/
