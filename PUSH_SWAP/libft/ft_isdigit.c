/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:13:13 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:21:58 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char c;
// 	c = 'o';
// 	printf("basic: %d\n", isdigit(c));
// 	printf("mine: %d\n", ft_isdigit(c));
// }