/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:40:10 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/28 15:42:09 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

void	ft_swap_custom(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	module_nb(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
