CC		=	c++
RM		=	rm -f
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
NAME	=	fixed_1
SRCS	=	main.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

all:
			$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			@$(CC) -o $(NAME) $(OBJS)
			@echo "fixed_1 is ready to use ✅ "

%.o: %.c	Makefile
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(RM)	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "Deleted 😬"

re:			fclean all

run:		all
			./$(NAME)

.PHONY: all bonus clean fclean re run