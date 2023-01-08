
SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
NAME 	= Brain
COMP 	= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

$(NAME):	$(OBJS)
	$(COMP) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)

re:		fclean all

cheaks:
		leaks -atExit -- ./${NAME}

.PHONY: all clean fclean re cheaks
