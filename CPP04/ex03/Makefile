NAME			=	Interface

C_FILE			=	AMateria.cpp		\
					Character.cpp		\
					Cure.cpp			\
					Floor.cpp			\
					Ice.cpp				\
					main.cpp			\
					MateriaSource.cpp

C_DIR			=	./

SRC				=	$(addprefix $(C_DIR), $(C_FILE))

O_FILE			=	$(SRC:.cpp=.o)

CC				=	c++

FLAGS			=	-Wall -Wextra -Werror -std=c++98

RM				=	 /bin/rm -rf

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILE)
	$(CC) $(FLAGS) $(O_FILE) -o $(NAME)

clean:
	$(RM) $(O_FILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean