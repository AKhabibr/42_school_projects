# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 13:43:32 by akhabibr          #+#    #+#              #
#    Updated: 2024/04/09 14:31:17 by akhabibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: megaphone

megaphone: $(OBJS)
	c++ $(FLAGS) $(OBJS) -o megaphone

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf megaphone

re:	 fclean all

.PHONY: all clean fclean re