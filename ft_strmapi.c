/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:13:11 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/12 19:49:11 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*m;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	m = (char *)malloc(ft_strlen(s) + 1);
	if (!m)
		return (0);
	while (s[i])
	{
		m[i] = f(i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}
/*
char	change(unsigned int i, char c)
{
	if (c == 'A')
		c = 'B';
	i++;
	return (c);
}

#include <stdio.h>

int	main(void)
{
	const char	str[] = "Ana Andro and Akro";
	printf("%s", ft_strmapi(str, change));
}
*/
