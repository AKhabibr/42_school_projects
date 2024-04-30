/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:38:18 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 14:05:18 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_amount(char const *s, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			size++;
		while (s[i] != c && s[i])
			i++;
	}
	return (size);
}

static char	*word_create(char const *s, char c)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (!(result))
	{
		free(result);
		return (NULL);
	}
	ft_strlcpy(result, s, i + 1);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words_num;
	char	**result;

	if (!s)
		return (NULL);
	words_num = word_amount(s, c);
	result = malloc(sizeof(s) * (words_num + 1));
	if (!(result))
		return (NULL);
	i = -1;
	while (++i < words_num)
	{
		while (*s == c)
			s++;
		result[i] = word_create(s, c);
		if (!(result[i]))
		{
			free(result);
			return (NULL);
		}
		s = s + ft_strlen(result[i]);
	}
	result[i] = 0;
	return (result);
}

// int main()
// {
//  	char str[20] = "$AAA$BBB$CCC";
//  	char **output = ft_split(str, '$');
// 	printf("The result is %s\n", output[0]);
// 	printf("The result is %s\n", output[1]);
// 	printf("The result is %s\n", output[2]);
//  	return 0;
// }
