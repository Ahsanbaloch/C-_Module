# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 14:39:06 by ahsalam           #+#    #+#              #
#    Updated: 2023/12/18 21:36:06 by ahsalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = megaphone

CXX		= c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET):	$(OBJ)
	$(CXX)	$(CXXFLAGS)	-o	$(TARGET)	$(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
