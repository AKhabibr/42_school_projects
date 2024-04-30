/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:32:46 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:48:29 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (count < size && (dst[count] != '\0'))
		count++;
	while ((src[i] != '\0') && ((count + i + 1) < size))
	{
		dst[count + i] = src[i];
		i++;
	}
	if (count != size)
		dst[count + i] = '\0';
	return (count + ft_strlen(src));
}

// int main () 
// {
// 	char s1[50] = "Hello! ";
// 	char s2[50] = "How are you?";

//     ft_strlcat(s1, s2, 30);	
// 	printf("Final string : %s\n", s1);
//     return(0);
// }
