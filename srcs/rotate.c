/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:16:12 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:11:32 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **first)
{
	t_stack	*temp;
	t_stack	*last;

	if (ft_lst_size(first) < 2)
		return ;
	temp = *first;
	*first = (*first)->next;
	last = *first;
	while (last && last->next)
	{
		last = last->next;
	}
	temp->next = NULL;
	last->next = temp;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
