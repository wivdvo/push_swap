/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:49:34 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/16 19:22:59 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (!*src)
		return (0);
	temp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = temp;
	return (1);
}

int	pa(t_stack **b, t_stack **a)
{
	if (push(b, a) == 0)
		return (0);
	ft_printf("pa\n");
	return (1);
}

int	pb(t_stack **a, t_stack **b)
{
	if (push(a, b) == 0)
		return (0);
	ft_printf("pb\n");
	return (1);
}
