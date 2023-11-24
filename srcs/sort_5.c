/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:33:09 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:18:40 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_stack **a, t_stack **b)
{
	while ((*a)->index != 0 && (*a)->index != 1)
		ra(a);
	pb(a, b);
	while ((*a)->index != 0 && (*a)->index != 1)
		ra(a);
	pb(a, b);
	sort_3_after5(a);
	if ((*b)->index == 0)
		rb(b);
	pa(b, a);
	pa(b, a);
}
