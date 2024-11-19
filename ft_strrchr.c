/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:19:43 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/15 18:43:26 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*st;
	unsigned char	ch;

	st = (char *)s;
	ch = (unsigned char)c;
	i = ft_strlen(s);
	if (*st == '\0' && c != '\0')
		return (NULL);
	while ((st[0] && i >= 0) || (st[0] == '\0' && i == 0))
	{
		if (st[i] == ch)
			return (&st[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", strrchr("a", '\0'));
	printf("%s\n", ft_strrchr("a", '\0'));
}
*/
