/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:58:29 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/21 21:37:19 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	node = lst;
	node->next = lst->next;
	while (node->next != NULL)
	{
		node = node->next;
	}
	lst->next = new;
	new->next = NULL;
}

int	main()
{
	t_list	*n1, *n2, *n3;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	t_list *new;
	new.content = "done";
	ft_lstadd_back(&n1, new);
}
