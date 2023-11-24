/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:08:38 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:17:09 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_index(t_stack **a)
{
	t_stack	*inner;
	t_stack	*outer;
	int		counter;
	int		nb;

	outer = *a;
	counter = 0;
	while (outer)
	{
		inner = *a;
		nb = outer->data;
		while (inner)
		{
			if (inner->data < nb)
				counter++;
			inner = inner->next;
		}
		outer->index = counter;
		counter = 0;
		outer = outer->next;
	}
}
