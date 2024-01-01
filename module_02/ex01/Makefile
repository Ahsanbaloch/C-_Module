# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 21:31:36 by ahsalam           #+#    #+#              #
#    Updated: 2023/12/28 21:32:00 by ahsalam          ###   ########.fr        #
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