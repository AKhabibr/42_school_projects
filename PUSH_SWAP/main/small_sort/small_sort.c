/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:54:07 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/27 15:22:53 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

void	for_2(t_swap *ps)
{
	t_struct	*first;
	t_struct	*second;

	first = *ps->stack_a;
	if (!first->next)
		return ;
	second = first->next;
	if (first->value > second->value)
		swap_a(ps);
}

void	for_3(t_swap *ps)
{
	t_struct	*first;
	t_struct	*second;
	t_struct	*third;

	first = *ps->stack_a;
	second = first->next;
	third = second->next;
	if (first->value > second->value && first->value > third->value)
	{
		rotate_a(ps);
		if (second->value > third->value)
			swap_a(ps);
		return ;
	}
	else if (first->value < third->value && second->value > third->value)
	{
		swap_a(ps);
		rotate_a(ps);
	}
	else if (first->value < second->value && second->value > third->value)
		reverse_rotate_a(ps);
	else if (first->value > second->value && first->value < third->value)
		swap_a(ps);
	return ;
}

void	for_5(t_swap *ps)
{
	t_struct	*iter;

	while (node_counter(ps->stack_a) != 3)
	{
		iter = *ps->stack_a;
		if (iter->value != ps->max)
			push_b(ps);
		else
			rotate_a(ps);
	}
	for_3(ps);
	while (node_counter(ps->stack_b))
	{
		give_price_for_every_number(ps);
		push_on_right_place_in_a(ps);
	}
	final_rotation(ps);
	return ;
}

void	small_sort(t_swap *ps)
{
	if (node_counter(ps->stack_a) <= 2)
		for_2(ps);
	else if (node_counter(ps->stack_a) == 3)
		for_3(ps);
	else if (node_counter(ps->stack_a) >= 4)
		for_5(ps);
}
