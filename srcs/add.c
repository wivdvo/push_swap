/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:33:03 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:05:54 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	add(t_stack **a, int nb)
{
	t_stack	*new_node;
	t_stack	*begin;
	int		index;

	begin = *a;
	index = 0;
	new_node = make_node(nb, index);
	if (new_node == NULL)
		return (0);
	ft_lstadd_back(a, new_node);
	return (1);
}

t_stack	*make_node(int nb, int index)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->data = nb;
	new_node->next = NULL;
	new_node->index = index;
	index++;
	return (new_node);
}
