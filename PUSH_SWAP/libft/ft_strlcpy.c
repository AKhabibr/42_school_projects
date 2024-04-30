/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:59:29 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 14:47:19 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	j = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// int main(void)
// {
// 	char str1[20] = "Privet";
// 	char str2[20] = "Andrey";
// 	ft_strlcpy(str1, str2, 2);
// 	printf("%s\n", str2);
// 	printf("Mine: %s\n", str1);
// 	strlcpy(str1, str2, 2);
// 	printf("Basic: %s\n", str1);
// 	return (0);
// }