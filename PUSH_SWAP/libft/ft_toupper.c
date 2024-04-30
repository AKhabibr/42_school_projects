/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:12:39 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/07 13:35:48 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// int main(void)
// {
// 	char a;
// 	a = '+';
// 	printf("basic: %c\n", toupper(a));
// 	printf("mine: %c\n", ft_toupper(a));
// }