# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 17:09:17 by ahsalam           #+#    #+#              #
#    Updated: 2024/03/24 17:08:40 by ahsalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name	=	cast
CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 
#-fsanitize=address

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