/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserebry <aserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:56:37 by akhabibr          #+#    #+#             */
/*   Updated: 2024/01/30 15:14:08 by aserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	char *str1 = "    	-1234nrvr ";
// 	printf("basic: %d\n", atoi(str1));
// 	printf("mine: %d\n", ft_atoi(str1));
// 	return (0);
// }