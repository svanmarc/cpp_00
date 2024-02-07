# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 18:05:48 by svanmarc          #+#    #+#              #
#    Updated: 2024/01/19 14:10:01 by svanmarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = megaphone

CC = g++

CFALGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFALGS) -o $(EXEC) $(OBJ)

%.o: %.cpp
	$(CC) $(CFALGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all
