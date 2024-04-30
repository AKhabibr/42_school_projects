# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 14:14:29 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/20 12:31:18 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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