/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:13:12 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/12 13:59:05 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < count && s1[i] == s2[i])
	{
		i++;
	}
	if (i == count)
		return (0);
	return (s1[i] - s2[i]);
}

// int main () 
// {
//     char str1[15] = "ABCc";
//     char str2[15] = "ABCcn";
//     int output, output1;

//     output = memcmp(str1, str2, 5);
// 	output1 = ft_memcmp(str1, str2, 5);
// 	printf("The value of basic function is: %d\n", output);
//     printf("The value of mine function is: %d\n", output1);
//     return(0);
// }
