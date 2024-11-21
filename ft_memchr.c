/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:54:46 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/12 18:38:29 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
// #include <string.h>

// int	main()
// {
// 	char str[] = "this is her bag";
// 	printf("%s\n", (char *)memchr(str, 'i', 13));
// 	printf("%s\n", (char *)ft_memchr(str, 'i', 13));
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// 	printf("%s\n", (char *)memchr(tab, -1, 7));
// }