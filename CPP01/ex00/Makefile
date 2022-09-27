NAME			=	BraiiiiiiinnnzzzZ

CC				=	c++

FLAG			= -Wall -Wextra -Werror -std=c++98

C_FILE			=	Zombie.cpp		\
					newZombie.cpp	\
					randomChump.cpp	\
					main.cpp

SRC_DIR			=	./

SRC				=	$(addprefix $(SRC_DIR), $(C_FILE))

O_FILE			=	$(addprefix $(SRC_DIR), *.o)

OBJ				=	$(SRC: .cpp=.o)

.cpp.o:
	$(CC) $(FLAG) $(SRC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -rf $(O_FILE)

fclean: clean
	/bin/rm -rf	$(NAME)

re: fclean all

.PHONY: all re clean fclean