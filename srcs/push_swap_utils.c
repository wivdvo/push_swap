/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:57:31 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 14:08:30 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_error(void)
{
	int		i;
	char	*str;

	i = 0;
	str = "Error\n";
	while (str && str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	print_list(t_stack **lst, char c)
{
	t_stack	*copy;

	copy = *lst;
	while (copy)
	{
		ft_printf("%c: %d index:%d\n", c, copy->data, copy->index);
		copy = copy->next;
	}
	ft_printf("\n");
}

int	ft_lst_size(t_stack **s)
{
	t_stack	*temp;
	int		i;

	temp = *s;
	i = 0;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
