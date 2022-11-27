
SRCS	= main.cpp Zombie.cpp
NAME 	= zombie
COMP 	= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

$(NAME):	$(OBJS)
	@$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)

re:		fclean all

cheaks:
		leaks --atExit -- ./zombie

.PHONY: all clean fclean re cheaks
