# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wvan-der <wvan-der@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 12:41:10 by wvan-der          #+#    #+#              #
#    Updated: 2023/11/20 15:55:02 by wvan-der         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap

SRCS =		srcs/check.c \
			srcs/ft_atoi.c \
			srcs/main.c \
			srcs/push_swap_utils.c \
			srcs/add.c \
			srcs/ft_split.c \
			srcs/swap.c \
			srcs/push.c \
			srcs/lst_utils.c \
			srcs/rotate.c \
			srcs/reverse_rotate.c \
			srcs/is_sorted.c \
			srcs/set_index.c \
			srcs/radix.c \
			srcs/sort_3.c \
			srcs/sort_4.c \
			srcs/sort_5.c \
			srcs/ft_itoa.c \
			srcs/ft_free.c
			

OBJS =		$(SRCS:.c=.o)

CC =		cc
CFLAGS =	-Wall -Werror -Wextra
PRINTF =	ft_printf/libftprintf.a
RM =		rm -rf

all:		$(NAME)

$(PRINTF):
				make -C ft_printf

$(NAME):	$(OBJS) $(PRINTF)
				$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o push_swap

clean:		
				make clean -C ft_printf
				$(RM) $(OBJS)

fclean:		clean
				make fclean -C ft_printf
				$(RM) $(NAME)

re:			fclean all