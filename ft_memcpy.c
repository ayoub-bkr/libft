/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:43:48 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/15 15:18:54 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <string.h>

// int	main()
// {
// 	//char	dst[] = "Hoba";
// 	//char	src[] = "Pika";
// 	//char	dst1[] = "Hoba";
// 	//char	src1[] = "Pika";

// 	printf("%s\n", (char *)memcpy(NULL, "NULL", 1));
// 	printf("%s\n", (char *)ft_memcpy(NULL, "NULL", 1));
// }