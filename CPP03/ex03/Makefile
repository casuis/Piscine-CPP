NAME		=	Diamond_trap

SRC			=	FragTrap.cpp		\
				ClapTrap.cpp		\
				ScavTrap.cpp		\
				DiamondTrap.cpp		\
				main.cpp

HEADER		=	FragTrap.hpp		\
				ClapTrap.hpp		\
				ScavTrap.hpp		\
				DiamondTrap.hpp

INCLUDE_FLAG	=	-I

INCLUDE		=	$(addprefix ${INCLUDE_FLAG}, $(HEADER))

OBJ			=	$(SRC:.cpp=.o)

HFILE		=	$(SRC:.cpp=.h)

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