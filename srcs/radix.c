/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:35:23 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 15:17:43 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix(t_stack **a, t_stack **b)
{
	t_stack	*a_copy;
	t_stack	*b_copy;
	int		digits;
	int		i;
	int		size;

	digits = get_digits(get_biggest(a)) - 1;
	b_copy = *b;
	i = -1;
	a_copy = *a;
	while (digits >= ++i)
	{
		size = ft_lst_size(&a_copy);
		while (size)
		{
			if (a_copy->index >> i & 1)
				ra(&a_copy);
			else
				pb(&a_copy, &b_copy);
			size--;
		}
		while (b_copy)
			pa(&b_copy, &a_copy);
	}
	*a = a_copy;
}

int	get_biggest(t_stack **a)
{
	t_stack	*s;
	int		nb;

	nb = 0;
	s = *a;
	while (s)
	{
		if (s->index > nb)
			nb = s->index;
		s = s->next;
	}
	return (nb);
}

int	get_digits(int nb)
{
	int	digits;

	digits = 31;
	while (!(nb >> digits & 1) && digits != 0)
	{
		digits--;
	}
	return (digits + 1);
}
/* 
int main()
{
	int digits = 0;
	digits = get_digits(get_biggest(a));
	ft_printf("digits: %d\n", digits);
} */