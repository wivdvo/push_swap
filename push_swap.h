/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:33:55 by wvan-der          #+#    #+#             */
/*   Updated: 2023/11/20 15:56:13 by wvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	put_error(void);
int		check_str(char *str);
int		check_unallowd_chars(char *str);
int		ft_atoi(const char *str);
int		check_dublicate(t_stack **a, int nb);
void	init(t_stack **a, t_stack **b, int *i, int *split_flag);
int		check_dublicate(t_stack **a, int nb);
t_stack	*make_node(int nb, int index);
int		add(t_stack **a, int nb);
int		connect_node(t_stack *a, t_stack *new_node);
void	print_list(t_stack **lst, char c);
void	ft_lstadd_back(t_stack **lst, t_stack *new_node);
t_stack	*ft_lstlast(t_stack *lst);
char	**ft_split(char *str);
int		ft_lst_size(t_stack **s);
void	ft_lstadd_front(t_stack **lst, t_stack *new_node);
int		swap(t_stack **s);
int		sa(t_stack **a);
int		sb(t_stack **b);
int		ss(t_stack **a, t_stack **b);
int		push(t_stack **src, t_stack **dest);
int		pa(t_stack **b, t_stack **a);
int		pb(t_stack **a, t_stack **b);
void	rotate(t_stack **first);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	reverse_rotate(t_stack **first);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		is_sorted(t_stack **s);
void	set_index(t_stack **a);
int		get_biggest(t_stack **a);
int		get_digits(int nb);
void	radix(t_stack **a, t_stack **b);
void	sort_3(t_stack **a);
void	sort_3_after5(t_stack **a);
void	sort_3_after4(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_itoa(int n);
void	ft_free(char **args, t_stack **a, int split_flag);

#endif
