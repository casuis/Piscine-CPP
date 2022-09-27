# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <asimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 04:49:15 by asimon            #+#    #+#              #
#    Updated: 2022/09/16 15:48:14 by asimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ezFind

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                          SHELL CMDS                             #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

CC			=	c++
MKDIR		=	/bin/mkdir -p
RM			=	/bin/rm -rf
CPP_FLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD -MP

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              DIRS                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

CPP_DIR		=	./src/
OBJ_DIR		=	./obj/

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                               SRC                               #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

SRC			=		main.cpp

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                             OBJECTS                             #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

O_FILES		=	$(SRC:.cpp=.o)
O_FILES		:=	$(addprefix $(OBJ_DIR), $(O_FILES))
D_FILES		=	$(O_FILES:.o=.d)

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              RULES                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #


$(OBJ_DIR)%.o: $(CPP_DIR)%.cpp
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CPP_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(O_FILES)
	$(CC) $(CPP_FLAGS) $(O_FILES) -o $(NAME)

-include $(D_FILES)

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
