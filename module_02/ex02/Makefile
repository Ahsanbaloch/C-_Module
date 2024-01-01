# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 00:22:24 by ahsalam           #+#    #+#              #
#    Updated: 2024/01/01 00:22:27 by ahsalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name	=	fpoint
CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp)

OBJDIR = ./obj/

OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))


all: $(Name)

$(Name): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(Name) $(OBJ)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re