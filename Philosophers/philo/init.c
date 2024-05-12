/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:49:01 by akhabibr          #+#    #+#             */
/*   Updated: 2024/03/13 19:16:19 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	data_init(t_data *data)
{
	int	i;

	data->threads = malloc(sizeof(pthread_t) * data->number_of_philos);
	if (data->threads == NULL)
		return (printf("Error"));
	data->forks = malloc(sizeof(pthread_mutex_t) * data->number_of_philos);
	if (data->forks == NULL)
		return (printf("Error"));
	i = 0;
	while (i < data->number_of_philos)
	{
		pthread_mutex_init(&data->forks[i], NULL);
		i++;
	}
	data->display_printf = malloc(sizeof(pthread_mutex_t));
	if (data->display_printf == NULL)
		return (printf("Error"));
	pthread_mutex_init(data->display_printf, NULL);
	data->time_of_creation = current_time();
	return (0);
}

void	init_philo(t_data *data, t_philo *philo, int i)
{
	philo->nbr = i + 1;
	philo->time_to_die = data->time_to_die;
	philo->time_to_eat = data->time_to_eat;
	philo->time_to_sleep = data->time_to_sleep;
	philo->number_of_meals = data->number_of_meals;
	philo->time_of_creation = data->time_of_creation;
	philo->display_printf = data->display_printf;
	philo->first_eating_time = 1;
	philo->last_eating_time = 0;
	philo->meal_counter = 0;
	philo->is_eating = 0;
	philo->left_fork = &data->forks[i];
	if (i == data->number_of_philos - 1)
		philo->right_fork = &data->forks[0];
	else
		philo->right_fork = &data->forks[i + 1];
}

t_philo	*philos_creation(t_data *data)
{
	int		i;
	t_philo	*philos;

	philos = malloc(sizeof(t_philo) * data->number_of_philos);
	if (NULL == philos)
		return (NULL);
	i = 0;
	while (i < data->number_of_philos)
	{
		init_philo(data, &philos[i], i);
		pthread_create(&data->threads[i], NULL,
			philo_actions, (void *)&philos[i]);
		pthread_detach(data->threads[i]);
		i++;
	}
	return (philos);
}

long long	current_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

void	my_usleep(long long time)
{
	long long	t;

	t = current_time();
	usleep(time * 920);
	while (current_time() < t + time)
		usleep(100);
}
