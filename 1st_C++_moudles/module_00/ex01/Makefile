# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 19:46:01 by ahsalam           #+#    #+#              #
#    Updated: 2023/12/10 20:01:35 by ahsalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  phonebook

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -str=c++98

SRC = *.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re