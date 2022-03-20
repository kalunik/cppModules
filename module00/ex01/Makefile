CC		=	c++
RM		=	rm -f
CFLAGS	=	-I. -std=c++98 -Wall -Wextra -Werror
NAME	=	PhoneBook
SRCS	=	main.cpp Contact.cpp PhoneBook.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

all:
			@$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			@$(CC) -o $(NAME) $(OBJS)
			@echo "PhoneBook is ready to use ✅ "

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