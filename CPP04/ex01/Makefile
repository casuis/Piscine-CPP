# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <asimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 14:38:53 by asimon            #+#    #+#              #
#    Updated: 2022/08/17 17:48:35 by asimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Polymorphisme

C_FILE		=	main.cpp		\
				Animal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				Brain.cpp

C_DIR		=	./

O_FILE		=	$(C_FILE:.cpp=.o)

OBJ			=	$(addprefix $(C_DIR), $(O_FILE))

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror --std=c++98

RM			=	/bin/rm -rf

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(O_FILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean