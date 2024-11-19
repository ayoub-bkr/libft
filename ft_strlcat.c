/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:13:14 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/17 23:28:19 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen((const char *)dst);
	srclen = ft_strlen(src);
	if (size == 0 && src[i])
		return (srclen);
	else if (size < dstlen)
		return (size + srclen);
	if (size > dstlen)
	{
		while (src[i] && dstlen + i < size - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include <string.h>

int	main()
{
	//char dest[];
	//printf("%d\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    	//write(1, dest, 15);
	
	char dst1[] = "Hello";
	char src1[] = " World";

	printf("%d\n", (int)ft_strlcat(dst1, src1, 4));
	ft_strlcat(dst1, src1, 4);
	printf("%s\n", dst1);
	
}
*/
