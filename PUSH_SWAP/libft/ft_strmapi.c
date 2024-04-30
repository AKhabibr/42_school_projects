/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:11:58 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/12 14:17:01 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	if (!s)
		return (0);
	if (!f)
		return (0);
	tmp = ft_strdup(s);
	if (!tmp)
		return (0);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);
}

// char my_func(unsigned int i, char str)
// {
// printf("My function: index = %d and %c\n", i, str);
// return (str + 32);
// }

// int main()
// {
//  	char str[10] = "ABCD";
//  	printf("My string before: %s\n", str);
//  	char *result = ft_strmapi(str, my_func);
//  	printf("My string after: %s\n", result);
//  	return (0);
// }
