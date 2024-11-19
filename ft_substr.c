/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:20:30 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/13 11:58:49 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*m;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	m = (char *) malloc(len + 1);
	if (!m)
		return (0);
	while (i < (unsigned int)len)
	{
		m[i] = s[start + i];
		i++;
	}
	m[i] = '\0';
	return (m);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s", ft_substr("01234", 10, 10));
}
*/
