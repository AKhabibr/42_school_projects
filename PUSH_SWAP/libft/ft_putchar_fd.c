/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:29:19 by akhabibr          #+#    #+#             */
/*   Updated: 2023/11/13 15:06:44 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char ch, int fd)
{
	write(fd, &ch, 1);
}

// int main ()
// {
//     char ch = 'C';
//     ft_putchar_fd(ch, 2);
//     return(0);
// }
