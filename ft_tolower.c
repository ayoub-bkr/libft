/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:15:19 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/03 19:17:41 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	str1 = 'B';
	char	str2 = 'B';

	printf("%c\n", tolower(str1));
	printf("%c", ft_tolower(str2));
}
*/
