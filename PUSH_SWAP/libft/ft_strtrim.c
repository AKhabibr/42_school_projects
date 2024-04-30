/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:04:35 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/16 16:54:15 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_character(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	size_t	begin;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	begin = 0;
	end = ft_strlen(s1);
	while (!check_character(s1[begin], set))
		begin++;
	if (begin == end)
	{
		result = ft_strdup("");
		if (!result)
			return (NULL);
		else
			return (result);
	}
	while (!check_character(s1[end - 1], set))
		end--;
	result = ft_substr(s1, begin, end - begin);
	return (result);
}

// int main()
// {
//  	char str[30] = "TreeAATree";
// 	char set[] = "Tree";
// 	char *result = ft_strtrim(str, set);
//  	printf("%s\n", result);
//  	return 0;
// }
