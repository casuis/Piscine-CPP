NAME		=	Buraucrat_0

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

CPP_FILE	=	main.cpp		\
				Bureaucrat.cpp	

CPP_DIR		=	./

SRC			=	$(addprefix $(CPP_DIR), $(CPP_FILE))

O_FILE		=	$(SRC:.cpp=.o)

RM			=	/bin/rm -rf

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILE)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(O_FILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean