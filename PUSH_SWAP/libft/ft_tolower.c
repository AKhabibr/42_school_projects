/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:29:13 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 14:50:59 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// int main(void)
// {
// 	char a;
// 	a = 'Z';
// 	printf("basic: %c\n", tolower(a));
// 	printf("mine: %c\n", ft_tolower(a));
// }