# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 14:33:52 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/13 13:10:44 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= phonebook.cpp contact.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: phonebook

phonebook: $(OBJS) phonebook.hpp
	c++ $(FLAGS) $(OBJS) -o phonebook

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf phonebook

re:	 fclean all

.PHONY: all clean fclean re