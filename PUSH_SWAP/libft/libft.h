/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:53:17 by akhabibr          #+#    #+#             */
/*   Updated: 2024/02/02 14:43:04 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int			ft_isalpha(int a);
int			ft_isdigit(int ch);
int			ft_isalnum(int a);
int			ft_isascii(int a);
int			ft_isprint(int a);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *buf, int ch, size_t count);
void		ft_bzero(void *buf, size_t count);
void		*ft_memcpy(void *destination, const void *source, size_t count);
void		*ft_memmove(void *destination, const void *source, size_t count);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *str, int a);
char		*ft_strrchr(const char *str, int a);
int			ft_strncmp(const char *str1, const char *str2, size_t count);
void		*ft_memchr(const void *str, int ch, size_t count);
int			ft_memcmp(const void *str1, const void *str2, size_t count);
long long	ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *src);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char ch, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int nb, int fd);
char		*ft_itoa(int n);
char		*ft_strnstr(const char	*haystack, const char *needle, size_t len);
char		*ft_strtrim(const char *s1, const char *set);
char		**ft_split(char const *s, char c);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif