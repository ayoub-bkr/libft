/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:43:13 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/17 16:07:38 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*((char *)s + i++) = 0;
}
// #include <string.h>

// int	main()
// {
// 	char	str[] = "hobahoba";
// 	char	str1[] = "hobahoba";

// 	ft_bzero("NULL", 0);
// 	printf("%s$\n", str);
// 	bzero("NULL", 0);
// 	printf("%s$\n", str1);
// }