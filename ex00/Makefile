NAME		:= Zombie
HEADERS		:= Zombie.hpp
SRCS		:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		:= $(SRCS:%.cpp=%.o)
CC			:= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

all			: $(NAME)

$(NAME)		: 	$(OBJS)
				$(CC) $(OBJS) -o $(NAME)

%.o			: %.cpp $(HEADERS)
				$(CC) $(CPPFLAGS) -c $< -o $@

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re
