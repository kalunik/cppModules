CC		=	c++
RM		=	rm -f
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
NAME	=	animal
SRCS	=	main.cpp\
			Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp

OBJS	=	$(patsubst %.cpp, %.o, $(SRCS))

all:
			$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			@$(CC) -o $(NAME) $(OBJS)
			@echo "animal is ready to use ✅ "

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