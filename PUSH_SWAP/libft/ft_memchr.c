/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:37:13 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/16 15:54:36 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if ((((unsigned char *)str)[i]) == (unsigned char)ch)
		{
			return ((unsigned char *)str + i);
		}
		i++;
	}
	return (NULL);
}

// int main () 
// {
// 	const char str[] = "hgdgd$ivh";
//     char ch = '$';
//     char *output;
// 	char *output1;

//     output = memchr(str, ch, 100);
// 	output1 = ft_memchr(str, ch, 100);

//     printf("Basic String after character is %s\n", output);
// 	printf("My String after character is %s\n", output1);
//     return(0);
//  }
