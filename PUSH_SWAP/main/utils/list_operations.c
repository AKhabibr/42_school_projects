/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:14:58 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/31 14:09:13 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

t_struct	*new_list_creation(int value)
{
	t_struct	*ptr;

	ptr = malloc(sizeof(t_struct));
	if (!ptr)
		return (0);
	ptr->value = value;
	ptr->price = 0;
	ptr->prev = 0;
	ptr->next = 0;
	return (ptr);
}

void	list_adding(t_struct **stack, t_struct *new)
{
	t_struct	*list_i;

	if (new == NULL)
		return ;
	if (*stack == 0)
	{
		*stack = new;
		return ;
	}
	list_i = *stack;
	while (list_i)
	{
		if (list_i->next == 0)
		{
			list_i->next = new;
			new->prev = list_i;
			return ;
		}
		list_i = list_i->next;
	}
}

t_struct	*last_node_in_stack(t_struct **stack)
{
	t_struct	*list_i;

	if (!stack || !*stack)
		return (0);
	list_i = *stack;
	while (list_i)
	{
		if (list_i->next == 0)
			return (list_i);
		list_i = list_i->next;
	}
	return (list_i);
}

size_t	node_counter(t_struct **stack)
{
	t_struct	*list_i;
	size_t		len;

	if (!stack || !*stack)
		return (0);
	len = 0;
	list_i = *stack;
	while (list_i)
	{
		if (list_i->next == 0)
			return (++len);
		list_i = list_i->next;
		len++;
	}
	return (len);
}

void	ft_lstclear_custom(t_struct **lst)
{
	t_struct	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}
