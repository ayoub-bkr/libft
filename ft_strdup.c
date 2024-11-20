/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:37:26 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/11 20:36:28 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*m;

	i = 0;
	m = malloc(ft_strlen(s) + 1);
	if (!m)
		return (0);
	while (s[i])
	{
		*(m + i) = s[i];
		i++;
	}
	*(m + i) = '\0';
	return (m);
}
// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char str[] = "Hello";

// 	printf("%s\n", strdup(""));
// 	printf("%s\n", ft_strdup(""));
// }