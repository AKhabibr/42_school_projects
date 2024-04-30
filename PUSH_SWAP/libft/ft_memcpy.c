/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:38:16 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/20 13:45:34 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t count)
{
	size_t	i;
	char	*from;
	char	*to;

	i = 0;
	to = (char *)destination;
	from = (char *)source;
	if (!destination && !source)
		return (destination);
	while (i < count)
	{
		to[i] = from[i];
		i++;
	}
	return (destination);
}

// int main()
// {
// 	char dst[50] = "Privet Andrey";
//  	char src[50] = "Kak dela, my friend?";

//  	memcpy(dst, src, 4 * sizeof(char));
// 	printf("basic: %s\n", dst);
// 	ft_memcpy(dst, src, 4 * sizeof(char) );
//  	printf("mine_: %s\n", dst);
//  	return 0;
// }
