NAME		=	job_of_your_dream

C_FILES		=	Account.cpp		\
				main.cpp

SRC_DIR		=	./

SRC			=	$(addprefix $(SRC_DIR), $(C_FILES))

O_FILE		=	$(addprefix $(SRC_DIR), *.o)

OBJ			=	$(SRC: .cpp=.o)

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

.cpp.o:
	$(CC) $(FLAG) $(SRC) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf	$(O_FILE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
