/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:48:52 by akhabibr          #+#    #+#             */
/*   Updated: 2024/03/13 19:18:33 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <sys/time.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_data
{
	int					number_of_philos;
	int					time_to_die;
	int					time_to_eat;
	int					time_to_sleep;
	int					number_of_meals;
	long long			time_of_creation;
	pthread_mutex_t		*forks;
	pthread_mutex_t		*display_printf;
	pthread_t			*threads;
}	t_data;

typedef struct s_philo
{
	int					nbr;
	long long			time_of_creation;
	int					time_to_die;
	int					time_to_eat;
	int					time_to_sleep;
	int					number_of_meals;
	int					first_eating_time;
	int					is_eating;
	int					meal_counter;
	int					last_eating_time;
	pthread_mutex_t		*left_fork;
	pthread_mutex_t		*right_fork;
	pthread_mutex_t		*display_printf;
}	t_philo;

int			data_init(t_data *data);
t_philo		*philos_creation(t_data *data);
long long	current_time(void);
void		*philo_actions(void *man_info);
long long	get_time(t_philo *philo);
void		free_all(t_data *data);
int			ft_parsing(int argc, char **argv, t_data *data);
void		my_usleep(long long time);
#endif