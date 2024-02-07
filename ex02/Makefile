# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 16:26:59 by svanmarc          #+#    #+#              #
#    Updated: 2024/02/06 16:43:55 by svanmarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GlobalBanksters

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
