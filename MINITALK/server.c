/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:51:41 by akhabibr          #+#    #+#             */
/*   Updated: 2024/02/10 13:57:14 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	bits_handler(int signal, siginfo_t *sigi, void *ucontext)
{
	static char	character = 0;
	static int	x = 256;

	(void)sigi;
	(void)ucontext;
	if (signal == SIGUSR2)
		character = character | x;
	x = x / 2;
	if (x == 0)
	{
		ft_putchar(character);
		character = 0;
		x = 256;
	}
}

int	main(void)
{
	struct sigaction	server;
	int					pid;

	server.sa_flags = SA_SIGINFO;
	server.sa_sigaction = bits_handler;
	pid = getpid();
	ft_printf("pid is %d\n", pid);
	if ((sigaction(SIGUSR2, &server, 0)) == -1)
		ft_printf("Error");
	if ((sigaction(SIGUSR1, &server, 0)) == -1)
		ft_printf("Error");
	while (1)
		pause();
	return (0);
}
