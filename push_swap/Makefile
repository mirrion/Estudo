NAME  = push_swap
LIBFT     = -Llibft -lft
INCS	= libft/includes
SRCS  = ${wildcard *.c}
CC    = gcc
CFLAGS  = -Wall -Wextra -Werror
RM    = rm -f
AR    = ar rc
RN    = ranlib

${NAME}: runlibft
	${CC} ${FLAGS} -I ${INCS} ${LIBFT} ${SRCS} -o ${NAME}

ignore: runlibft
	${CC} -I ${INCS} ${LIBFT} ${SRCS} -o ${NAME}

all: ${NAME}

clean:
		${RM} ${NAME}

fclean:   clean
	make -C libft fclean

re:     fclean all

runlibft:
	make -C libft

test:
	${CC} ${FLAGS} test.c ${LIBFT}
