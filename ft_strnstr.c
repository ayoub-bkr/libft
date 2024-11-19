/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:53:13 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/13 12:07:11 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while (i < len && big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && j + i < len && little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main()
{
	char str[] = "Book is not a book";
	char s[] = "ok";
	printf("%s\n", strnstr(str, s, 4));
	printf("%s\n", ft_strnstr(str, s, 4));
}
*/
