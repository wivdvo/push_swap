/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:43:37 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 15:56:29 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*copy;
	t_stack	*temp;

	copy = *stack;
	while (copy)
	{
		temp = copy;
		copy = copy->next;
		free(temp);
	}
	free(copy);
}

void	ft_free(char **args, t_stack **a, int split_flag)
{
	int	i;

	i = 0;
	if (split_flag)
	{
		while (args[i])
		{
			free(args[i]);
			i++;
		}
		free(args);
	}
	if (a)
		free_stack(a);
}
