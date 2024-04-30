/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:42 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/16 15:34:54 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char const	*temp;

	temp = NULL;
	while (*str)
	{
		if (*str == (char)a)
			temp = str;
		str++;
	}
	if (*str == (char)a)
		return ((char *)str);
	else
		return ((char *)temp);
}

// int main () 
// {
//     const char str1[] = "grgh.rg.gr";
//     const char ch = '.';
//     char *result;

//     result = ft_strrchr(str1, ch);
//     printf("%s\n", result);
//     return(0);
// }