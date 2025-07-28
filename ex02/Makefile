# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masase <masase@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 15:04:47 by masase            #+#    #+#              #
#    Updated: 2025/07/21 20:49:24 by masase           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Now

SRCS = main.cpp \
	Fixed.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
