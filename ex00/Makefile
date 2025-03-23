# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 17:24:41 by ssoeno            #+#    #+#              #
#    Updated: 2025/03/23 15:42:06 by ssoeno           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.PHONY: valgrind
valgrind: all
	valgrind -q --log-fd=3 --leak-check=full --error-exitcode=1 ./$(NAME)
