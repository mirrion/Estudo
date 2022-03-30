NAME 	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:.c=.o}
SRCS	= *.c
RM		= rm -f

${NAME}: ${OBJS}
			${CC} ${CFLAGS} -c *.c
			ar rc ${NAME} *.o
			ranlib ${NAME}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all
