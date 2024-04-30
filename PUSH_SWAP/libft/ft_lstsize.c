/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:49:26 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/18 16:10:19 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
