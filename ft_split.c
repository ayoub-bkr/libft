/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:06:48 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/18 10:18:08 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**freeing(char **m, int i)
{
	while (i-- > 0)
		free(m[i]);
	free(m);
	return (NULL);
}

static char const	*skip(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**m;

	i = 0;
	if (!s)
		return (NULL);
	m = malloc(sizeof(char *) * (words(s, c) + 1));
	if (!m)
		return (NULL);
	while (*s)
	{
		len = 0;
		s = skip(s, c);
		if (*s == '\0')
			break ;
		while (s[len] != c && s[len])
			len++;
		m[i] = ft_substr(s, 0, len);
		if (m[i++] == NULL)
			return (freeing (m, i));
		s += len;
	}
	m[i] = NULL;
	return (m);
}
// #include <stdio.h>
// int	main()
// {
// 	// int	i = 0;
// 	// char s[] = "Hello broda sista";
// 	// char *rrr = malloc(1);
// 	// *rrr = 0;
// 	// char **r = ft_split(rrr, '\0');
// 	// while (r && r[i])
// 	// {
// 	// 	printf("%s\n", r[i]);
// 	// 	i++;
// 	// }
// 	char	**c = ft_split(NULL, ' ');
// }