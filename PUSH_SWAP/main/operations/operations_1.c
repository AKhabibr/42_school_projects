/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:08:05 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/28 17:56:39 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

void	swap_first_two_elements(t_struct **stack)
{
	t_struct	*second;
	t_struct	*first;

	first = *stack;
	if (!stack || !first || !first->next)
		return ;
	else
	{
		second = first->next;
		if (second->next == NULL)
			first->next = NULL;
		else
		{
			second->next->prev = first;
			first->next = second->next;
		}
		second->next = first;
		second->prev = 0;
		first->prev = second;
		*stack = second;
	}
}

void	push_operation(t_struct **stack_a, t_struct **stack_b, int flag_to_be)
{
	t_struct	*first;
	t_struct	*second;

	if (!stack_a || !*stack_a)
		return ;
	else
	{
		first = *stack_a;
		*stack_a = first->next;
		if (first->next)
			first->next->prev = 0;
		if (*stack_b)
		{
			second = *stack_b;
			second->prev = first;
			first->next = *stack_b;
		}
		else
			first->next = 0;
		*stack_b = first;
		if (flag_to_be)
			first->price = 0;
	}
}

void	rotate_operation(t_struct **stack)
{
	t_struct	*last;
	t_struct	*first;

	if (!stack || !*stack)
		return ;
	else
	{
		first = *stack;
		if (!first->next)
			return ;
		last = last_node_in_stack(stack);
		if (last)
		{
			last->next = first;
			first->prev = last;
			*stack = first->next;
			first->next->prev = 0;
			first->next = 0;
		}
	}
}

void	reverse_rotate_operation(t_struct **stack)
{
	t_struct	*last;
	t_struct	*first;

	if (!stack || !*stack)
		return ;
	else
	{
		first = *stack;
		if (!first->next)
			return ;
		last = last_node_in_stack(stack);
		if (last)
		{
			last->prev->next = 0;
			last->next = first;
			first->prev = last;
			*stack = last;
			last->prev = 0;
		}
	}
}
