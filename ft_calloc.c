/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:25:17 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/06 21:51:34 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (size != 0 && (nmemb * size) / size != nmemb)
		return (0);
	m = malloc(nmemb * size);
	if (!m)
		return (0);
	ft_memset(m, 0, nmemb * size);
	return (m);
}
/*
#include <stdio.h>

int	main()
{
	char	*p;
	char	*c;

	p = (char *)ft_calloc(3, sizeof(char));
	c = (char *)calloc(3, sizeof(char));
	printf("%s\n", p);
	printf("%s\n", c);
}
*/
