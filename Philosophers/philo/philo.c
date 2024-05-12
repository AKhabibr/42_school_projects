/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:17:05 by akhabibr          #+#    #+#             */
/*   Updated: 2024/03/13 19:17:14 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	actions_control(t_data *data, t_philo *philos)
{
	int	i;

	i = 0;
	while (i < data->number_of_philos)
	{
		if (get_time(&philos[i]) - philos[i].last_eating_time
			> philos[i].time_to_die && !philos[i].is_eating)
		{
			pthread_mutex_lock(data->display_printf);
			printf("%lld %d died\n", get_time(&philos[i]), philos[i].nbr);
			break ;
		}
		if (data->number_of_meals != -1
			&& philos[i].meal_counter >= (data->number_of_meals + 2))
			break ;
		i++;
		if (i == data->number_of_philos)
			i = 0;
	}
	free_all(data);
}

int	main(int argc, char **argv)
{
	t_philo		*philos;
	t_data		data;

	if (argc < 5 || argc > 6)
		return (printf("Wrong nbr of arguments!\n"));
	if (ft_parsing(argc, argv, &data))
		return (1);
	if (data_init(&data))
		return (1);
	philos = philos_creation(&data);
	if (philos == NULL)
		return (printf("Error"));
	actions_control(&data, philos);
	return (0);
}
