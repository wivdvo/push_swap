/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:55:07 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 15:57:01 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_stack **a, t_stack **b)
{
	set_index(a);
	if (ft_lst_size(a) == 2)
		ra(a);
	else if (ft_lst_size(a) == 3)
		sort_3(a);
	else if (ft_lst_size(a) == 4)
		sort_4(a, b);
	else if (ft_lst_size(a) == 5)
		sort_5(a, b);
	else if (ft_lst_size(a) > 5)
		radix(a, b);
}

int	make_list(char **args, t_stack **a, int i)
{
	int		nb;
	char	*str;

	if (args[0] == NULL)
		return (put_error(), 0);
	nb = 0;
	while (args[i])
	{
		if (check_str(args[i]) == 0)
			return (put_error(), 0);
		nb = ft_atoi(args[i]);
		str = ft_itoa(nb);
		if (ft_strcmp(args[i], str) != 0)
		{
			free(str);
			return (put_error(), 0);
		}
		free(str);
		if (check_dublicate(a, nb) == 0)
			return (put_error(), 0);
		if (add(a, nb) == 0)
			return (put_error(), 0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*b;
	t_stack	*a;
	char	**args;
	int		split_flag;

	init(&a, &b, &i, &split_flag);
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		split_flag = 1;
		args = ft_split(argv[1]);
		if (!args)
			return (put_error(), 1);
		i--;
	}
	else
		args = argv;
	if (make_list(args, &a, i) == 0)
		return (ft_free(args, &a, split_flag), 1);
	if (is_sorted(&a))
		return (ft_free(args, &a, split_flag), 0);
	sort(&a, &b);
	ft_free(args, &a, split_flag);
}

void	init(t_stack **a, t_stack **b, int *i, int *split_flag)
{
	*a = NULL;
	*b = NULL;
	*i = 1;
	*split_flag = 0;
}
