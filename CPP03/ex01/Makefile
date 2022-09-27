NAME		=	Serenna_my_dear_love

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

C_FILE		=	main.cpp		\
				ScavTrap.cpp	\
				ClapTrap.cpp

C_DIR		=	./

SRC			=	$(addprefix $(C_DIR), $(C_FILE))

OBJ			=	$(SRC:.cpp=.o)

O_FILE		=	$(addprefix $(C_DIR), *.o)

RM			=	/bin/rm -rf


.cpp.o:
	${CC} ${FLAGS} -c $ $< -o ${<:.cpp=.o}

all: $(NAME)

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean:
	$(RM) $(O_FILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean