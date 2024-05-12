/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:48:57 by akhabibr          #+#    #+#             */
/*   Updated: 2024/03/13 19:15:48 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	ft_eat(t_philo *philo)
{
	if (philo->first_eating_time && philo->nbr % 2 == 0)
	{
		my_usleep(100);
		philo->first_eating_time = 0;
	}
	pthread_mutex_lock(philo->left_fork);
	pthread_mutex_lock(philo->right_fork);
	philo->is_eating = 1;
	philo->last_eating_time = get_time(philo);
	pthread_mutex_lock(philo->display_printf);
	printf("%lld %d took a left fork\n", get_time(philo), philo->nbr);
	printf("%lld %d took a right fork\n", get_time(philo), philo->nbr);
	printf("%lld %d is eating\n", get_time(philo), philo->nbr);
	pthread_mutex_unlock(philo->display_printf);
	my_usleep(philo->time_to_eat);
	philo->meal_counter++;
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
	philo->is_eating = 0;
}

void	*philo_actions(void *man_info)
{
	t_philo	*philo;

	philo = (t_philo *)man_info;
	while (1)
	{
		if (philo->number_of_meals == -1
			|| philo->meal_counter < philo->number_of_meals)
		{
			ft_eat(philo);
			pthread_mutex_lock(philo->display_printf);
			printf("%lld %d is sleeping\n", get_time(philo), philo->nbr);
			pthread_mutex_unlock(philo->display_printf);
			my_usleep(philo->time_to_sleep);
			pthread_mutex_lock(philo->display_printf);
			printf("%lld %d is thinking\n", get_time(philo), philo->nbr);
			pthread_mutex_unlock(philo->display_printf);
		}
		else
			break ;
	}
	return (NULL);
}

long long	get_time(t_philo *philo)
{
	long long		res;

	res = current_time() - philo->time_of_creation;
	return (res);
}

void	free_all(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->number_of_philos)
	{
		pthread_mutex_destroy(&data->forks[i]);
		i++;
	}
	free(data->forks);
	free(data->threads);
	pthread_mutex_destroy(data->display_printf);
	free(data->display_printf);
}
