/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:37:25 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/15 18:43:40 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*st;
	unsigned char	ch;

	i = 0;
	st = (char *)s;
	ch = (unsigned char)c;
	while (st[i] && st[i] != ch)
		i++;
	if (st[i] == ch)
		return (&st[i]);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	printf("%s\n", strchr("", '\0'));
// 	printf("%s\n", ft_strchr("", '\0'));
// }