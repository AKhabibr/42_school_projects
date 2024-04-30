/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:56:04 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/28 17:14:24 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

int	take_start_position(t_struct **stack, int number)
{
	t_struct		*list_i;
	long long		pos;

	if (!stack || !*stack)
		return (0);
	pos = 0;
	list_i = *stack;
	while (list_i)
	{
		if (list_i->value == number)
			return (pos);
		if (list_i->next == 0)
			return (pos);
		list_i = list_i->next;
		pos++;
	}
	return (pos);
}

int	number_of_moves_on_top(t_struct **stack, int num)
{
	int	pos;
	int	rev_pos;

	pos = take_start_position(stack, num);
	rev_pos = pos - node_counter(stack);
	if (pos <= module_nb(rev_pos))
		return (pos);
	else
		return (rev_pos);
}

int	first_bigger(t_struct **stack, int num)
{
	t_struct	*list_i;
	int			max;

	max = 2147483647;
	list_i = *stack;
	while (list_i)
	{
		if (list_i->value < max && list_i->value > num)
			max = list_i->value;
		list_i = list_i->next;
	}
	return (max);
}

int	moves_to_find_right_place(t_swap *ps, t_struct	*node)
{
	int			bigger;
	int			steps;

	steps = module_nb(number_of_moves_on_top(ps->stack_b, node->value));
	bigger = first_bigger(ps->stack_a, node->value);
	steps = steps + module_nb(number_of_moves_on_top(ps->stack_a, bigger));
	return (steps);
}

void	give_price_for_every_number(t_swap *ps)
{
	t_struct	*list_i;
	size_t		i;

	i = 0;
	list_i = *ps->stack_b;
	while (i < node_counter(ps->stack_b))
	{
		list_i->price = moves_to_find_right_place(ps, list_i);
		list_i = list_i->next;
		i++;
	}
}
