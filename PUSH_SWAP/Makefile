# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 14:21:10 by akhabibr          #+#    #+#              #
#    Updated: 2024/02/03 13:45:08 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main/big_sort/big_sort_1.c main/big_sort/big_sort_2.c main/big_sort/big_sort_3.c \
	main/operations/operations_1.c main/operations/operations_2.c main/operations/operations_3.c \
	main/push_swap/push_swap.c main/small_sort/small_sort.c main/utils/list_operations.c \
	main/utils/mid_max_min.c main/utils/parsing.c main/push_swap/handle_args.c \
	main/utils/small_utils.c

OBJS = $(SRCS:.c=.o)

LIBFT = libft/libft.a

NAME = push_swap

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(MAKE) -C libft/
	$(CC) -o $(NAME) $(OBJS) $(LIBFT)

all: $(NAME)

%.o: %.c main/push_swap/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C libft/
	$(RM) $(OBJS)

fclean:	clean
	$(MAKE) fclean -C libft/
	$(RM) libft.a	
	$(RM) push_swap	

re:	fclean all

.PHONY: all clean fclean re