/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:20:11 by akhabibr          #+#    #+#             */
/*   Updated: 2024/02/02 13:50:07 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"

typedef struct s_struct{
	int				value;
	int				price;
	struct s_struct	*prev;
	struct s_struct	*next;
}	t_struct;

typedef struct s_swap{
	t_struct		**stack_a;
	t_struct		**stack_b;
	int				min;
	int				mid;
	int				max;
}	t_swap;

int			push_swap(int argc, char **argv);
int			check_args(int argc, char **argv);
int			take_mid(int argc, char **argv);
int			take_max(int argc, char **argv);
int			take_min(int argc, char **argv);
int			module_nb(int a);

int			create_start_stack(t_swap *ps, int argc, char **argv);
t_struct	*new_list_creation(int value);
void		list_adding(t_struct **stack, t_struct *new);
t_struct	*last_node_in_stack(t_struct **stack);
size_t		node_counter(t_struct **stack);

void		small_sort(t_swap *ps);
void		for_2(t_swap *ps);
void		for_3(t_swap *ps);
void		for_5(t_swap *ps);
void		big_sort(t_swap *ps);

int			take_start_position(t_struct **stack, int num);
int			number_of_moves_on_top(t_struct **stack, int num);
int			first_bigger(t_struct **stack, int num);
int			search_the_cheapest_nb(t_struct **stack);
void		push_mid_to_b(t_swap *ps);
void		push_everything_to_b(t_swap *ps);
void		give_price_for_every_number(t_swap *ps);
void		push_on_right_place_in_a(t_swap *ps);

void		swap_a(t_swap *ps);
void		push_a(t_swap *ps);
void		push_b(t_swap *ps);
void		rotate_a(t_swap *ps);
void		rotate_b(t_swap *ps);
void		reverse_rotate_a(t_swap *ps);
void		reverse_rotate_b(t_swap *ps);
void		swap_first_two_elements(t_struct **stack);
void		push_operation(t_struct **stack_a, t_struct **stack_b, int to_b);
void		rotate_operation(t_struct **stack);
void		reverse_rotate_operation(t_struct **stack);
void		final_rotation(t_swap *ps);
void		handle_multiple_args(t_swap *ps, char **argv);
void		ft_swap_custom(int *a, int *b);
void		ft_lstclear_custom(t_struct **lst);

#endif
