/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:04:44 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/05 14:34:13 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)buf;
	while (i < count)
	{
		ptr[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}

// int main()
// {
// 	char str[100] = "How are you?";

// 	ft_memset(str, '!', 9);
// 	printf("%s\n", str);
// 	return 0;
// }