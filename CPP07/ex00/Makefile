NAME		=	start

CC			=	c++

CPP_FLAGS	=	-Wall -Wextra -Werror -std=c++98

CPP_FILES	=	main.cpp

CPP_HEADER	=	whatever.hpp

CPP_DIR		=	./

SRC			=	$(addprefix $(CPP_DIR), $(CPP_FILES))

O_FILES		=	$(SRC:.cpp=.o)

RM			=	/bin/rm -rf

.cpp.o:
	$(CC) $(CPP_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILES) $(HEADER)
	$(CC) $(CPP_FLAGS) $(O_FILES) -o $(NAME)

clean:
	$(RM) $(O_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all