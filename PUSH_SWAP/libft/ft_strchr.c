/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:19:19 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/07 12:21:32 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	while (*str)
	{
		if (*str == (char)a)
			return ((char *)str);
		str++;
	}
	if ((char)a == '\0')
		return ((char *)str);
	return (0);
}

// int main () 
// {
// 	const char str1[] = "Privet Andrey";
//     char ch = 'v';
//     char *output;

//     output = ft_strchr(str1, ch);
//     printf("%s\n", output);
//     return(0);
// }
