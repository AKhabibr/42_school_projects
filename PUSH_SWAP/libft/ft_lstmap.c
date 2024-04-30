/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:25:03 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/19 13:44:40 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_new;

	if (!lst || !f)
		return (NULL);
	list_new = ft_lstnew(f(lst->content));
	if (list_new == NULL)
	{
		ft_lstclear(&list_new, del);
		return (NULL);
	}
	list_new->next = ft_lstmap(lst->next, f, del);
	return (list_new);
}
