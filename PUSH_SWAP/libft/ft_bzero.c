/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:45:13 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/05 14:32:41 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)buf;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char str[100] = "Hello world";

// 	ft_bzero(str, 5);
// 	printf("%s\n", str);
// 	return 0;
// }