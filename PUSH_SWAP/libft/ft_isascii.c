/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:43:24 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:21:49 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if ((a >= 0) && (a <= 127))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char c;
// 	c = '+';
// 	printf("basic: %d\n", isascii(c));
// 	printf("mine: %d\n", ft_isascii(c));
// }