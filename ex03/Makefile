NAME		=	fight
CC			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC_DIR		=	src/
OBJ_DIR		=	obj/
SRC			=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp
SRCS		=	$(addprefix $(SRC_DIR), $(SRC))
OBJS		=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))
INC			=	-I ./includes/

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp 
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@ $(INC)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
