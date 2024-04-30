# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 15:20:02 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/20 12:29:39 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Zombie.cpp zombieHorde.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: zombie

zombie: $(OBJS) Zombie.hpp
	c++ $(CPPFLAGS) $(OBJS) -o zombie

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf zombie

re:	 fclean all

.PHONY: all clean fclean re