# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 14:03:37 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/22 14:04:06 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Fixed.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: output

output: $(OBJS) Fixed.hpp
	c++ $(CPPFLAGS) $(OBJS) -o output

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf output

re:	 fclean all

.PHONY: all clean fclean re