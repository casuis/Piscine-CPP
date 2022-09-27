NAME		=	Chained_work

SRC			=	FragTrap.cpp	\
				ClapTrap.cpp	\
				ScavTrap.cpp	\
				main.cpp

OBJ			=	$(SRC:.cpp=.o)

O_FILE		=	./*.o

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror --std=c++98

.cpp.o:
	${CC} ${CFLAGS} -c $ $< -o ${<:.cpp=.o}

all: $(NAME)

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	/bin/rm -rf $(O_FILE)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean