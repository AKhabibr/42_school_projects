/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:08:44 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/28 17:40:56 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

void	swap_a(t_swap *ps)
{
	swap_first_two_elements(ps->stack_a);
	write(1, "sa\n", 3);
}

void	push_a(t_swap *ps)
{
	push_operation(ps->stack_b, ps->stack_a, 0);
	write(1, "pa\n", 3);
}

void	push_b(t_swap *ps)
{
	push_operation(ps->stack_a, ps->stack_b, 1);
	write(1, "pb\n", 3);
}
