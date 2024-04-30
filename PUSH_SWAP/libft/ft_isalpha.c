/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:45:19 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:22:14 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	char c;
// 	c = '=';
// 	printf("basic: %d\n", isalpha(c));
// 	printf("mine: %d\n", ft_isalpha(c));
// }