NAME	=	harlFilter

C_FILE	=	Harl.cpp		\
			main.cpp

C_DIR	=	./

SRC		=	$(addprefix $(C_DIR), $(C_FILE))

OBJ		=	$(SRC: .cpp=.o)

O_FILE	=	$(addprefix $(C_DIR), *.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.cpp.o:
	$(CC) $(FLAGS) $(SRC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -rf $(O_FILE)

fclean:	clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean