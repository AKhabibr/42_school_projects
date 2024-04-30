/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:48 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:51:58 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && !len)
		return (NULL);
	if (!needle && !len)
		return (NULL);
	if (!(*needle))
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& ((i + j) < len) && (haystack[i + j] == needle[j]))
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char haystack[50] = "Hello! How are you? What is your name?";
//     const char needle[50] = "How";
//     char *result;

//     result = ft_strnstr(haystack, needle, 10);
//     printf("The substring is: %s\n", result);
//     return(0);
// }
