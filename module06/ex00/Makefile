CC		=	c++
RM		=	rm -f
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
NAME	=	convert
SRCS	=	main.cpp\


OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

all:
			$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			@$(CC) -o $(NAME) $(OBJS)
			@echo "$(NAME) is ready to use ✅ "

%.o:		%.cpp Makefile
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(RM)	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "Deleted 😬"

re:			fclean all

test:		all
			./$(NAME) 0
			./$(NAME) nan

.PHONY: all bonus clean fclean re test