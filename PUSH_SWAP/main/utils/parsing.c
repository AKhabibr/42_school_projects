/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:14:50 by akhabibr          #+#    #+#             */
/*   Updated: 2024/02/02 14:01:04 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main/push_swap/push_swap.h"

static int	is_digit(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		if (argv[i][0] == '0' && argv[i][j + 1] != '\0')
			return (2);
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (argv[i][j] < '0' || argv[i][j] > '9')
			return (2);
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (2);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_over_flow(int argc, char **argv)
{
	int			i;
	long long	number;

	i = 0;
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		if (number > 2147483647 || number < -2147483648)
			return (2);
		i++;
	}
	return (0);
}

static int	ft_double_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (2);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (is_digit(argc, argv) || ft_over_flow(argc, argv)
		|| ft_double_num(argc, argv))
		return (2);
	else
		return (0);
}
