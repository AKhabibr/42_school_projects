/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:17:29 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 13:46:16 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void own_func(unsigned int i, char *str)
// {
//  	printf("index = %d; string is %s\n", i, str);
// }
// int main()
// {
//  	char str[10] = "ABCD";
//  	printf("The result is %s\n", str);
//  	ft_striteri(str, own_func);
//  	printf("The result is %s\n", str);
//  	return (0);
// }
