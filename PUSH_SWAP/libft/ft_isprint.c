/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:05:09 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/03 16:08:20 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if ((a >= 32) && (a < 127))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char c;
// 	c = 23;
// 	printf("basic: %d\n", isprint(c));
// 	printf("mine: %d\n", ft_isprint(c));
// }