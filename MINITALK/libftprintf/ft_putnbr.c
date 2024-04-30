/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:38:25 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/28 12:53:29 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int				printed;
	unsigned int	number;

	printed = 0;
	number = n;
	if (n < 0)
	{
		number = -number;
		printed += ft_putchar('-');
	}
	if (number >= 10)
	{
		printed += ft_putnbr(number / 10);
		printed += ft_putnbr(number % 10);
	}
	else
		printed += ft_putchar(number + '0');
	return (printed);
}
