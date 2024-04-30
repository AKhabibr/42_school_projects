/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:15:51 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/10 13:37:23 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t count)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char *)destination;
	src = (char *)source;
	i = 0;
	if (dest == src)
		return (dest);
	if (src < dest)
	{
		i = count;
		while (i--)
			((char *)dest)[i] = ((char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < count)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char dst[50] = "gggg";
//  	char src[50] = "yyyy";
// 	memmove(dst, src, 3);
//  	printf("basic: %s\n", dst);
//  	ft_memmove(dst, src, 3);
//  	printf("mine_: %s\n", dst);
//  	return 0;
// }
