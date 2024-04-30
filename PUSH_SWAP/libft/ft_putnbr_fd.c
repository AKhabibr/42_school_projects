/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:38:25 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 15:09:22 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	sign_change(int nb, int fd)
{
	long long	c;

	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
	{
		write(fd, "-", 1);
		c = nb;
		c = -c;
	}
	else
		c = nb;
	return (c);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long long		x;
	char			mass[50];
	int				i;

	x = sign_change(nb, fd);
	i = 0;
	while (x != 0)
	{
		mass[i] = x % 10 + '0';
		x = x / 10;
		i++;
	}
	while (i > 0)
		write(fd, &mass[--i], 1);
}

// int	main(void)
// {
// 	ft_putnbr(346, 2);
// }