/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:51:24 by akhabibr          #+#    #+#             */
/*   Updated: 2023/12/29 13:27:23 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	bits_sender(char character, int pid)
{
	int	x;

	x = 256;
	while (x > 0)
	{
		if ((character & x) > 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		x = x / 2;
		usleep(100);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	pid;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = custom_atoi(argv[1]);
	if (kill(pid, 0) < 0)
	{
		ft_printf("Incorrect pid\n");
		return (1);
	}
	while (argv[2][i])
	{
		bits_sender(argv[2][i], pid);
		i++;
	}
	return (0);
}
