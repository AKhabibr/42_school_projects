# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 14:38:51 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/20 12:32:52 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ex04

ex04: $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o ex04

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf ex04

re:	 fclean all

.PHONY: all clean fclean re