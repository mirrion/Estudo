NAME 	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:.c=.o}
SRCS	= *.c

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
	gcc -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
