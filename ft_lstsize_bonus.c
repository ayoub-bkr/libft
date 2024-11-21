/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:33:47 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/21 19:15:33 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	main()
{
	t_list	*n1, *n2, *n3;
	//n1.next = &n2;
	//n2.next = &n3;
	//n3.next = NULL;
	n3 = ft_lstnew("n3");
	n2 = ft_lstnew("n2");
	n2->next = n3;
	n1 = ft_lstnew("n1");
	n1->next = n2;
	printf("%d", ft_lstsize(n1));
}
