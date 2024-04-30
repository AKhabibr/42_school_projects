/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:51:38 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/19 17:06:38 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (count && size && (count > (UINT_MAX / size)))
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (0);
	return (ft_memset(tmp, 0, count * size));
}

// int main(void)
// {
// 	char *str1 = "rtyturyu";
// 	printf("%s\n", ft_calloc(3, 3));
// 	return (0);
// }