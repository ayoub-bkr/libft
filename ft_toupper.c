/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:12:08 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/03 19:14:57 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c1 = 'b';
	char c2 = 'b';

	printf("%c\n", toupper(c1));
	printf("%c", ft_toupper(c2));
}
*/
