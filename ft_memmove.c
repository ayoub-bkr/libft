/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:46:37 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/17 23:44:30 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned char	*sr;

	ds = (unsigned char *) dest;
	sr = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (ds > sr && ds < sr + n)
	{
		while (n)
		{
			n--;
			*(ds + n) = *(sr + n);
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (ds);
}
/*
#include <string.h>

int	main()
{
	char	str[] = "ABCDEF";
	char	str1[] = "ABCDEF";
	//char	st[] = "VWXYZ";
	//char	st1[] = "VWXYZ";

	printf("%s", (char *)memmove(str, str + 2, 3));
	printf("%d\n", (int)strlen(str));
	printf("%s", (char *)ft_memmove(str1, str1 + 2, 3));
	printf("%d\n", (int)strlen(str1));
}
*/
