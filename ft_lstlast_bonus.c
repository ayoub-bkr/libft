/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:31:21 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/21 19:42:26 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	main()
{
	t_list	n1, n2, n3;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	n3.content = "the last of us";
	printf("%s", (char *)ft_lstlast(&n1)->content);
}
