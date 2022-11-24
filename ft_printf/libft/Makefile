SRCS	= ${wildcard *.c}
NAME 	= libft.a
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rc
RN		= ranlib

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

so: all
	gcc -o libft.so -shared -fPIC $(OBJS)
