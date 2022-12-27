NAME  = so_long
LIBFT     = -Llibft -lft
INCS	= libft/includes
LIBX = -L mlx_linux -lmlx_Linux
LIBXFLAGS = -lmlx -lXext -lX11
SRCS  = ${wildcard *.c}
CC    = gcc
CFLAGS  = -Wall -Wextra -Werror
RM    = rm -f
AR    = ar rc
RN    = ranlib

${NAME}: runlibft
	${CC} ${FLAGS} -I ${INCS} ${LIBFT} ${SRCS} $(LIBX) $(LIBXFLAGS) -o ${NAME}

ignore: runlibft
	${CC} -I ${INCS} ${LIBFT} ${SRCS} $(LIBX) $(LIBXFLAGS) -o ${NAME}

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
