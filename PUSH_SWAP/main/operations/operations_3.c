/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:10:00 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/27 15:22:53 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

void	rotate_a(t_swap *ps)
{
	rotate_operation(ps->stack_a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_swap *ps)
{
	rotate_operation(ps->stack_b);
	write(1, "rb\n", 3);
}

void	reverse_rotate_a(t_swap *ps)
{
	reverse_rotate_operation(ps->stack_a);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_swap *ps)
{
	reverse_rotate_operation(ps->stack_b);
	write(1, "rrb\n", 4);
}
