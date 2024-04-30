/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:36:58 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:21:36 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || (a >= 48 && a <= 57))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char c;
// 	c = '';
// 	printf("basic: %d\n", isalnum(c));
// 	printf("mine: %d\n", ft_isalnum(c));
// 	return (0);
// }