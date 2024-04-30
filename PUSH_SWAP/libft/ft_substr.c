/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:00:42 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/17 15:20:40 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	i;
// 	size_t	j;

// 	if (!s)
// 		return (0);
// 	str = (char *)malloc(len + 1);
// 	if (!str)
// 		return (0);
// 	i = start;
// 	j = 0;
// 	while (i < ft_strlen(s) && j < len)
// 		str[j++] = s[i++];
// 	str[j] = '\0';
// 	return (str);
// }
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
// int main(void)
// {
// 	char *str1 = "Privet Andrey";
// 	printf("%s\n", ft_substr(str1, 3, 2));
// 	return (0);
// }