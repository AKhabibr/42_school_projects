/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:08:22 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/28 12:45:34 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	result;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	result = write(1, s, ft_strlen(s));
	return (result);
}
