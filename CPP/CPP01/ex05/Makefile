# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 14:29:06 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/20 12:33:39 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: harl

harl: $(OBJS) Harl.hpp
	c++ $(CPPFLAGS) $(OBJS) -o harl

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf harl

re:	 fclean all

.PHONY: all clean fclean re
