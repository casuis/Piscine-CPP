NAME		=	identify

CC			=	c++

FlAG		=	-Wall -Wextra -Werror -std=c++98

CPP_FILE	=	main.cpp		\
				Func.cpp		\
				functions.cpp	\
				Base.cpp

CPP_DIR		=	./

HEADER		=	A.hpp			\
				B.hpp			\
				C.hpp			\
				Base.hpp		\
				Func.hpp		\
				header.hpp

SRC			=	$(addprefix $(CPP_DIR), $(CPP_FILE))

O_FILE		=	$(SRC:.cpp=.o)

RM			=	/bin/rm -rf

.cpp.o:
	$(CC) $(FlAG) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILE) $(HEADER)
	$(CC) $(FLAG) $(O_FILE) -o $(NAME)

clean:
	$(RM) $(O_FILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean