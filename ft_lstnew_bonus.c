/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:49:33 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/21 15:14:30 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
int	main()
{
	//t_list	*word = ft_lstnew("hello");
	printf("%s", (char *)ft_lstnew("Hola")->content);
}*/
