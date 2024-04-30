# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:51:36 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/20 12:32:26 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: violence

violence: $(OBJS) HumanA.hpp HumanB.hpp Weapon.hpp
	c++ $(CPPFLAGS) $(OBJS) -o violence

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf violence

re:	 fclean all

.PHONY: all clean fclean re