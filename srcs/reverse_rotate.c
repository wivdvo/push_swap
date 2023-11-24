/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:31:59 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:11:19 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **first)
{
	t_stack	*last;
	t_stack	*before_last;

	if (ft_lst_size(first) < 2)
		return ;
	last = *first;
	while (last && last->next)
	{
		last = last->next;
	}
	before_last = *first;
	while (before_last && before_last->next->next)
	{
		before_last = before_last->next;
	}
	last->next = *first;
	*first = last;
	before_last->next = NULL;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
