# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 19:18:09 by akhabibr          #+#    #+#              #
#    Updated: 2024/03/14 09:47:48 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = philo.c actions.c init.c parsing.c
HEADER = philo.h

OBJ = $(SRC:.c=.o)

CFLAGS = -Wextra -Werror -Wall
CC = cc
RM = rm -rf

all:	philo

philo:	$(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o philo
	
clean:
	$(RM) $(OBJ)
	
fclean:	clean
	$(RM) philo
	
re:	fclean all

.PHONY:	all clean fclean re
