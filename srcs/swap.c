/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:17:27 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:12:49 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack **s)
{
	t_stack	*first;
	t_stack	*second;
	int		temp_data;
	int		temp_index;

	if (ft_lst_size(s) < 2)
		return (0);
	first = *s;
	second = first->next;
	temp_data = first->data;
	temp_index = first->index;
	first->data = second->data;
	first->index = second->index;
	second->data = temp_data;
	second->index = temp_index;
	return (1);
}

int	sa(t_stack **a)
{
	if (swap(a) == 0)
		return (0);
	else
		ft_printf("sa\n");
	return (1);
}

int	sb(t_stack **b)
{
	if (swap(b) == 0)
		return (0);
	else
		ft_printf("sb\n");
	return (1);
}

int	ss(t_stack **a, t_stack **b)
{
	if (swap(a) == 0 || swap(b) == 0)
		return (0);
	else
		ft_printf("ss\n");
	return (1);
}
