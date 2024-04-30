/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:39:26 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 15:03:51 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;

	i = 0;
	if (count == 0)
		return (0);
	while (str1[i] && str1[i] == str2[i] && count > i)
	{
		i++;
	}
	if (i == count)
		return (0);
	return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}

// int main ()
// {
// 	char str1[50] = "1234";
// 	char str2[50] = "1235";
//     int output;
// 	int output1;

//     output = ft_strncmp(str1, str2, 3);
// 	output1 = strncmp(str1, str2, 3);
// 	printf("The value of basic function is: %d\n", output1);
//     printf("The value of mine function is: %d\n", output);
//     return(0);
// }
