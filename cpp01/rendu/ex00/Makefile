
SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
NAME 	= zombie
COMP 	= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

$(NAME):	$(OBJS)
	@$(COMP) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)

re:		clean fclean all

.PHONY: all clean fclean re
