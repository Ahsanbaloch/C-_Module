# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 21:23:15 by ahsalam           #+#    #+#              #
#    Updated: 2023/12/20 14:17:35 by ahsalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flcean re