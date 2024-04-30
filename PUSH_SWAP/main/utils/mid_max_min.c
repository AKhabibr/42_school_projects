/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:15:05 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/30 16:27:53 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

int	take_min(int argc, char **argv)
{
	int	i;
	int	min;
	int	current;

	min = 2147483647;
	i = 0;
	while (i < argc)
	{
		current = ft_atoi(argv[i]);
		if (current < min)
			min = current;
		i++;
	}
	return (min);
}

int	take_max(int argc, char **argv)
{
	int	i;
	int	max;
	int	current;

	max = -2147483648;
	i = 0;
	while (i < argc)
	{
		current = ft_atoi(argv[i]);
		if (current > max)
			max = current;
		i++;
	}
	return (max);
}

static int	*put_args_to_array(int argc, char **argv)
{
	int	*array;
	int	i;

	array = malloc((argc - 1) * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		array[i] = atoi(argv[i + 1]);
		i++;
	}
	return (array);
}

int	take_mid(int argc, char **argv)
{
	int	*arr;
	int	i;
	int	j;

	arr = put_args_to_array(argc, argv);
	if (!arr)
		return (0);
	i = -1;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc - 1)
		{
			if (arr[i] > arr[j])
				ft_swap_custom(&arr[i], &arr[j]);
		}
	}
	i = arr[(argc - 1) / 2];
	free(arr);
	return (i);
}
