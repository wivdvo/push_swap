/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:11:49 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:17:51 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack **a)
{
	t_stack	*a_copy;
	int		first;
	int		second;
	int		third;

	a_copy = *a;
	first = a_copy->index;
	second = a_copy->next->index;
	third = a_copy->next->next->index;
	if (first == 1 && second == 0 && third == 2)
		sa(a);
	else if (first == 1 && second == 2 && third == 0)
		rra(a);
	else if (first == 0 && second == 2 && third == 1)
	{
		sa(a);
		ra(a);
	}
	else if (first == 2 && second == 0 && third == 1)
		ra(a);
	else if (first == 2 && second == 1 && third == 0)
	{
		sa(a);
		rra(a);
	}
}

void	sort_3_after5(t_stack **a)
{
	t_stack	*a_copy;
	int		first;
	int		second;
	int		third;

	a_copy = *a;
	first = a_copy->index;
	second = a_copy->next->index;
	third = a_copy->next->next->index;
	if (first == 3 && second == 2 && third == 4)
		sa(a);
	else if (first == 3 && second == 4 && third == 2)
		rra(a);
	else if (first == 2 && second == 4 && third == 3)
	{
		sa(a);
		ra(a);
	}
	else if (first == 4 && second == 2 && third == 3)
		ra(a);
	else if (first == 4 && second == 3 && third == 2)
	{
		sa(a);
		rra(a);
	}
}

void	sort_3_after4(t_stack **a)
{
	t_stack	*a_copy;
	int		first;
	int		second;
	int		third;

	a_copy = *a;
	first = a_copy->index;
	second = a_copy->next->index;
	third = a_copy->next->next->index;
	if (first == 2 && second == 1 && third == 3)
		sa(a);
	else if (first == 2 && second == 3 && third == 1)
		rra(a);
	else if (first == 1 && second == 3 && third == 2)
	{
		sa(a);
		ra(a);
	}
	else if (first == 3 && second == 1 && third == 2)
		ra(a);
	else if (first == 3 && second == 2 && third == 1)
	{
		sa(a);
		rra(a);
	}
}
