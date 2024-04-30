# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 16:53:54 by akhabibr          #+#    #+#              #
#    Updated: 2023/12/29 12:54:52 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES_C_Client = client.c ./libftprintf/ft_printf.c ./libftprintf/custom_atoi.c ./libftprintf/ft_putchar.c \
							./libftprintf/ft_putnbr.c ./libftprintf/ft_putstr.c ./libftprintf/ft_strlen.c
FILES_C_Server = server.c ./libftprintf/ft_printf.c ./libftprintf/custom_atoi.c ./libftprintf/ft_putchar.c \
							./libftprintf/ft_putnbr.c ./libftprintf/ft_putstr.c ./libftprintf/ft_strlen.c

FILES_O_Client = $(FILES_C_Client:.c=.o)
FILES_O_Server = $(FILES_C_Server:.c=.o)

CFLAGS = -Wextra -Werror -Wall
CC = cc
HEADERS = minitalk.h ./libftprintf/ft_printf.h

all: server client

server: $(FILES_O_Server) $(HEADERS)
	$(CC) $(CFLAGS) $(FILES_O_Server) -o server
client: $(FILES_O_Client) $(HEADERS)
	$(CC) $(CFLAGS) $(FILES_O_Client) -o client

clean:
	rm -rf $(FILES_O_Client) $(FILES_O_Server)

fclean: clean
	rm -rf server client

re: fclean all

.PHONY = all clean fclean re