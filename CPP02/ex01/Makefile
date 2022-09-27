# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <asimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 19:42:02 by asimon            #+#    #+#              #
#    Updated: 2022/07/19 19:42:08 by asimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	util_class

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

C_FILE		=	main.cpp		\
				Fixed.cpp

C_DIR		=	./

SRC			=	$(addprefix $(C_DIR), $(C_FILE))

OBJ			=	$(SRC: .cpp=.o)

O_FILE		=	$(addprefix $(C_DIR), *.o)

.cpp.o:
	$(CC) $(FLAGS) $(SRC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	
all: $(NAME)

clean:
	/bin/rm -rf $(O_FILE)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean
