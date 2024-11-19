/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:15:31 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/17 21:40:43 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
#include <string.h>

int	main(void)
{
	//char str[] = "Hello";
	//printf("%s\n", (char *)memset(str, 'a', 4));
	//printf("%s\n", (char *)ft_memset(str, 'a', 4));
	int	a;
	int	*p = &a;

	ft_memset(p, 0, 4);
	ft_memset(p, 3, 3);
	ft_memset(p, 70, 2);
	ft_memset(p, 220, 1);
	printf("%d", a);
}
*/
