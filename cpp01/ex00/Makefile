
SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
NAME 	= zombie
COMP 	= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

$(NAME):	$(OBJS)
	@$(COMP) $(FLAGS) $(OBJS)

all:	$(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)

re:		clean fclean all

.PHONY: all clean fclean re
