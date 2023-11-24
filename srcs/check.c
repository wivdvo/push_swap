/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:06:54 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:06:14 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_str(char *str)
{
	if (check_unallowd_chars(str) == 0)
		return (0);
	return (1);
}

int	check_unallowd_chars(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}

int	check_dublicate(t_stack **a, int nb)
{
	t_stack	*a_copy;

	a_copy = *a;
	while (a_copy)
	{
		if (a_copy->data == nb)
			return (0);
		a_copy = a_copy->next;
	}
	return (1);
}
