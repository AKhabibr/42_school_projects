/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:37:37 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/14 16:58:05 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_spots(int n)
{
	int	spots;

	spots = 0;
	if (n < 0)
		spots++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		spots++;
	}
	return (spots);
}

char	*ft_itoa(int n)
{
	char		*output;
	int			i;
	long long	tmp;

	i = ft_spots(n);
	output = (char *) malloc(sizeof(char) * (i + 1));
	if (!output)
		return (0);
	tmp = n;
	output[0] = '0';
	if (tmp < 0)
	{
		output[0] = '-';
		tmp = tmp * (-1);
	}
	output[i] = 0;
	while (tmp != 0)
	{
		output[i - 1] = '0' + tmp % 10;
		tmp = tmp / 10;
		i--;
	}
	return (output);
}

// int main()
// {
//  	long long a = -2147483648;
//  	char *str_a = ft_itoa(a);
//  	printf("%s\n", str_a);
//  	return 0;
// }
