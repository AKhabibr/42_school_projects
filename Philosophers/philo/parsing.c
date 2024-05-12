/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:49:12 by akhabibr          #+#    #+#             */
/*   Updated: 2024/03/14 09:47:25 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * sign);
}

static int	check_digits(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error: Wrong symbol!\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	check_args_value(t_data *table)
{
	if (table->number_of_philos > 200)
	{
		printf("Error: Too many Philosophers!\n");
		return (1);
	}
	if (table->time_to_die < 60 || table->time_to_eat < 60
		|| table->time_to_sleep < 60)
	{
		printf("Error: Wrong arguments!\n");
		return (1);
	}
	return (0);
}

int	ft_parsing(int argc, char **argv, t_data *table)
{
	table->number_of_philos = ft_atoi(argv[1]);
	table->time_to_die = ft_atoi(argv[2]);
	table->time_to_eat = ft_atoi(argv[3]);
	table->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		table->number_of_meals = ft_atoi(argv[5]);
	else
		table->number_of_meals = -1;
	if (table->number_of_philos < 1 || table->time_to_sleep < 0
		|| table->time_to_eat < 0
		|| (argc == 6 && table->number_of_meals <= 0))
		return (printf("Error: Wrong arguments!\n"));
	if ((check_digits(argv) != 0) || (check_args_value(table) != 0))
		return (1);
	return (0);
}
