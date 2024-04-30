/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:20:05 by akhabibr          #+#    #+#             */
/*   Updated: 2024/02/02 14:47:57 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

static t_swap	*prog_init(t_swap **ps, t_struct **stack_a, t_struct **stack_b)
{
	*ps = malloc(sizeof(t_swap));
	if (!ps)
		return (0);
	(*ps)->stack_a = stack_a;
	(*ps)->stack_b = stack_b;
	return (*ps);
}

int	create_start_stack(t_swap *ps, int argc, char **argv)
{
	int			i;
	long long	value;
	t_struct	*new;

	ps->max = 0;
	ps->mid = 0;
	ps->min = 0;
	i = 0;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		new = new_list_creation(value);
		if (!new)
			return (1);
		list_adding(ps->stack_a, new);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_swap		*ps;
	t_struct	*stack_a;
	t_struct	*stack_b;

	if (argc < 2)
		return (1);
	else
	{
		stack_a = NULL;
		stack_b = NULL;
		prog_init(&ps, &stack_a, &stack_b);
		handle_multiple_args(ps, argv);
		ft_lstclear_custom(&stack_a);
		ft_lstclear_custom(&stack_b);
		free(ps);
		return (0);
	}
}
