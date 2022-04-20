NAME 	= get_next_line.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:.c=.o}
SRCS	= ${wildcard *.c}
RM		= rm -f
AR		= ar rc
RN		= ranlib
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}


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
