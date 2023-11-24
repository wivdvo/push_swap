/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:58:38 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:07:24 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new_node)
{
	t_stack	*temp;

	if (!lst || !new_node)
		return ;
	if (*lst)
	{
		temp = ft_lstlast(*lst);
		temp->next = new_node;
	}
	else
		*lst = new_node;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new_node)
{
	if (!lst || !new_node)
		return ;
	new_node->next = *lst;
	*lst = new_node;
}

/* void	ft_lstdel(t_stack **lst)
{
	while (lst)
	{
		if (lst)
			free(lst)
		
	}
} */