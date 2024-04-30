# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 14:16:29 by akhabibr          #+#    #+#              #
#    Updated: 2024/02/02 14:34:44 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_C = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		 ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		 ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		 ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

FILES_C_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstiter.c ft_lstdelone.c ft_lstclear.c \
				ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

FLAGS = -Wextra -Werror -Wall -g
FILES_O = $(FILES_C:.c=.o)
BONUS_O_FILES = $(FILES_C_BONUS:.c=.o)

NAME = libft.a
CC = cc

all: $(NAME)

$(NAME): $(FILES_O)
	ar rcs $(NAME) $(FILES_O)

bonus: $(BONUS_O_FILES) $(O_FILES)
	ar rcs $(NAME) $(O_FILES) $(BONUS_O_FILES)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(FILES_O) $(BONUS_O_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re bonus
	