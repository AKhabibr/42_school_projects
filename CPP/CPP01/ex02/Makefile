# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 16:54:11 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/20 12:31:59 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: main

main: $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o main

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf main

re:	 fclean all

.PHONY: all clean fclean re