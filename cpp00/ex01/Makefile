
SRCS	= main.cpp Contact.cpp PhoneBook.cpp
NAME 	= PhoneBook
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

re:		fclean all

.PHONY: all clean fclean re
