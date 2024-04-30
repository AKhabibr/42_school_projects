/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:14:28 by akhabibr          #+#    #+#             */
/*   Updated: 2024/02/02 14:50:57 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

static int	measure_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		i++;
	}
	return (i);
}

static int	check_for_error(int size, char **array)
{
	int	i;

	if (check_args(size, array) == 2)
	{
		ft_putstr_fd("Error\n", 1);
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
		return (1);
	}
	else
		return (0);
}

static int	ascending_order(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if ((ft_atoi(argv[i]) >= ft_atoi(argv[j])))
				return (2);
			j++;
		}
		i++;
	}
	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	return (0);
}

static	int	stack_creation(t_swap *ps, int size, char **array)
{
	int	i;

	if (create_start_stack(ps, size, array) == 1)
		return (1);
	ps->mid = take_mid(size, array);
	ps->max = take_max(size, array);
	ps->min = take_min(size, array);
	if (size <= 6)
		small_sort(ps);
	else
		big_sort(ps);
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}

void	handle_multiple_args(t_swap *ps, char **argv)
{
	char	**array;
	int		size;
	int		i;
	char	*massiv;

	massiv = ft_strdup(argv[1]);
	i = 2;
	while (argv[i])
	{
		massiv = ft_strjoin(massiv, " ");
		massiv = ft_strjoin(massiv, argv[i]);
		i++;
	}
	array = ft_split(massiv, ' ');
	free(massiv);
	size = measure_array(array);
	if (check_for_error(size, array) == 1)
		return ;
	if (!ascending_order(size, array))
		return ;
	if (stack_creation(ps, size, array) == 1)
		return ;
}
