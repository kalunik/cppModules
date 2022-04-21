CC		=	c++
RM		=	rm -f
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
NAME	=	convert
SRCS	=	main.cpp\
			Literal.cpp\


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
			./$(NAME)
			./$(NAME) g 2
			./$(NAME) g
			./$(NAME) 8
			./$(NAME) 123.234f
			./$(NAME) -255
			./$(NAME) -2147483648
			./$(NAME) 2147483648
			./$(NAME) 2.4923
			./$(NAME) 1234567.8243f
			./$(NAME) 3.4e-38
			./$(NAME) 3.4e+39
			./$(NAME) 3.14159265358979323846e+5
			./$(NAME) nan
			./$(NAME) nanf
			./$(NAME) +inf
			./$(NAME) -inf

.PHONY: all bonus clean fclean re test