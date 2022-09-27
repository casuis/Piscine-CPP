# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <asimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 18:31:05 by asimon            #+#    #+#              #
#    Updated: 2022/09/15 08:16:57 by asimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	mutant

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              SHELL                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

CC			=	c++

CPP_FLAGS	=	-Wall -Wextra -Werror -MMD -MP -std=c++98

MKDIR		=	/bin/mkdir -p

RM			=	/bin/rm -rf


# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              DIR                                #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

CPP_DIR		=	./src/

OBJ_DIR		=	./obj/

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              FILES                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

CPP_FILES	=	main.cpp

O_FILES		=	$(CPP_FILES:.cpp=.o)
O_FILES		:=	$(addprefix $(OBJ_DIR), $(O_FILES))
D_FILES		=	$(O_FILES:.o=.d)

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              RULES                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

all: $(NAME)



$(OBJ_DIR)%.o: $(CPP_DIR)%.cpp
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CPP_FLAGS) -c $< -o $@

$(NAME):	$(O_FILES)
	$(CC) $(FLAGS) $(O_FILES) -o $(NAME)
	
-include $(D_FILES)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean