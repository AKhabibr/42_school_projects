/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:01:38 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/27 15:22:53 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

void	push_mid_to_b(t_swap *ps)
{
	int	steps;
	int	i;

	steps = number_of_moves_on_top(ps->stack_a, ps->mid);
	i = 0;
	if (steps > 0)
	{
		while (i++ < steps)
			rotate_a(ps);
	}
	else if (steps < 0)
	{
		while (i++ < module_nb(steps))
			reverse_rotate_a(ps);
	}
	push_b(ps);
	return ;
}

void	push_everything_to_b(t_swap *ps)
{
	t_struct	*list_i;

	while (node_counter(ps->stack_a) != 2)
	{
		list_i = *ps->stack_a;
		if (list_i->value != ps->min && list_i->value != ps->max)
		{
			push_b(ps);
			if (list_i->value > ps->mid)
				rotate_b(ps);
		}
		else
			rotate_a(ps);
	}
}

void	final_rotation(t_swap *ps)
{
	int	steps;
	int	i;

	i = 0;
	steps = number_of_moves_on_top(ps->stack_a, ps->min);
	if (steps > 0)
	{
		while (i++ < module_nb(steps))
			rotate_a(ps);
	}
	else if (steps < 0)
	{
		while (i++ < module_nb(steps))
			reverse_rotate_a(ps);
	}
}

void	big_sort(t_swap *ps)
{
	push_mid_to_b(ps);
	push_everything_to_b(ps);
	while (node_counter(ps->stack_b))
	{
		give_price_for_every_number(ps);
		push_on_right_place_in_a(ps);
	}
	final_rotation(ps);
	return ;
}
