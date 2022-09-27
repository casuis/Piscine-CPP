NAME		=	serialisation

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

CPP_FILES	=	functions.cpp		\
				main.cpp

HEADER		=	Data.hpp

CPP_DIR		=	./

SRC			= 	$(addprefix $(CPP_DIR), $(CPP_FILES))

O_FILE		=	$(SRC:.cpp=.o)

RM			=	/bin/rm -rf

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILE) $(HEADER)
	$(CC) $(FLAGS) $(O_FILE) -o $(NAME)

clean:
	$(RM) $(O_FILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
