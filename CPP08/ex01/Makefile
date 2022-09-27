# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimon <asimon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 04:49:08 by asimon            #+#    #+#              #
#    Updated: 2022/09/11 02:45:19 by asimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	span

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


SRC			=		main.cpp		\
					Span.cpp

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                             OBJECTS                             #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

O_FILES		=	$(SRC:.cpp=.o)
O_FILES		:=	$(addprefix $(OBJ_DIR), $(O_FILES))
D_FILES		=	$(O_FILES:.o=.d)

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                              RULES                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

all: $(NAME)

$(OBJ_DIR)%.o: $(CPP_DIR)%.cpp
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CPP_FLAGS) -c $< -o $@


$(NAME): $(O_FILES)
	$(CC) $(CPP_FLAGS) $(O_FILES) -o $(NAME)

-include $(D_FILES)

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
