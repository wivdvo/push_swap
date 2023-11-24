/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:01:03 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:07:19 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack **s)
{
	t_stack	*copy;

	copy = *s;
	if (!copy)
		return (0);
	while (copy->next)
	{
		if (copy->data < copy->next->data)
			copy = copy->next;
		else
			return (0);
	}
	return (1);
}
