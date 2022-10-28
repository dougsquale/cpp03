SRCS			= ClapTrap.cpp ScavTrap.cpp main.cpp

OBJS			= $(SRCS:.cpp=.o)

DEPS			= $(SRCS:.cpp=.d)

CC				= c++

FLAGS			= -MD -Wall -Wextra -Werror -std=c++98

RM				= rm -f

NAME			= run


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o		:
				${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
				$(RM) $(OBJS)
				$(RM) $(DEPS)

fclean:			clean
				$(RM) $(NAME)

-include $(DEPS)

re:				fclean $(NAME)

.PHONY:			all clean fclean re