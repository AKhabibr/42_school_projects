/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:06:37 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/28 17:14:53 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

int	search_the_cheapest_nb(t_struct **stack)
{
	t_struct	*list_i;
	t_struct	*smallest_node;
	int			min_flag;

	list_i = *stack;
	min_flag = 2147483647;
	while (list_i)
	{
		if (list_i->price < min_flag)
		{
			smallest_node = list_i;
			min_flag = list_i->price;
		}
		list_i = list_i->next;
	}
	return (smallest_node->value);
}

void	choose_right_rotations(t_swap *ps, int moves_in_a, int moves_in_b)
{
	int	i;

	i = 0;
	if (moves_in_b > 0)
	{
		while (i++ < moves_in_b)
			rotate_b(ps);
	}
	else if (moves_in_b < 0)
	{
		while (i++ < module_nb(moves_in_b))
			reverse_rotate_b(ps);
	}
	i = 0;
	if (moves_in_a > 0)
	{
		while (i++ < moves_in_a)
			rotate_a(ps);
	}
	else if (moves_in_a < 0)
	{
		while (i++ < module_nb(moves_in_a))
			reverse_rotate_a(ps);
	}
}

void	push_on_right_place_in_a(t_swap *ps)
{
	int	moves_in_a;
	int	moves_in_b;

	moves_in_b = number_of_moves_on_top(ps->stack_b,
			search_the_cheapest_nb(ps->stack_b));
	moves_in_a = number_of_moves_on_top(ps->stack_a, first_bigger(ps->stack_a,
				search_the_cheapest_nb(ps->stack_b)));
	choose_right_rotations(ps, moves_in_a, moves_in_b);
	push_a(ps);
	return ;
}
