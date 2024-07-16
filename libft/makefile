CC = gcc
FLAGS = -Wextra -Wall -Werror
SOURCES = *.c
OBJS = $(SOURCES:.c=.o)
NAME = libft
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SOURCES) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
