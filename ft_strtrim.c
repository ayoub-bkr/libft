/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:03:51 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/13 11:49:34 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	skip_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		size;
	char	*m;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = skip_start(s1, set);
	if (start >= (int)ft_strlen(s1))
		return (ft_strdup(""));
	end = skip_end(s1, set);
	size = (ft_strlen(s1) - start) - (ft_strlen(s1) - 1 - end);
	m = (char *)malloc(sizeof(char) * size + 1);
	if (m == 0)
		return (0);
	while (i < size)
		m[i++] = s1[start++];
	m[i] = '\0';
	return (m);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	s[] = "wwwwwwww";
	char const	set[] = "w";
	printf("%s", ft_strtrim(s, set));
}
*/
