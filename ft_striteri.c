/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:57:38 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/12 19:53:33 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	upalpha(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
}

int	main(void)
{
	char	s[] = "DadA";
	printf("%s\n", s);
	ft_striteri(s, upalpha);
	printf("%s", s);
}
*/
