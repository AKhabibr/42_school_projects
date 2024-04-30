/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:14:33 by akhabibr          #+#    #+#             */
/*   Updated: 2023/12/25 16:21:39 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_mod(char format, va_list args)
{
	int	output;

	output = 0;
	if (format == 'c')
		output = output + ft_putchar(va_arg(args, int));
	else if (format == 's')
		output = output + ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		output += ft_putnbr(va_arg(args, int));
	else if (format == '%')
		output += ft_putchar('%');
	return (output);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;
	int		i;

	va_start(args, format);
	printed = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			printed = printed + format_mod(format[i + 1], args);
			i++;
		}
		else
			printed = printed + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
