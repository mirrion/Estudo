NAME  = so_long
LIBFT     = -Llibft -lft
LIBX = -L mlx_linux -lmlx_Linux
LIBXFLAGS = -lmlx -lXext -lX11
SRCS  = ${wildcard *.c}
CC    = gcc
CFLAGS  = -Wall -Wextra -Werror
RM    = rm -f
AR    = ar rc
RN    = ranlib

${NAME}:
	$(MAKE) --no-print-directory -C libft
	$(MAKE) --no-print-directory -C mlx_linux
	${CC} ${FLAGS} ${SRCS} ${LIBFT}  $(LIBX) $(LIBXFLAGS) -o ${NAME} -g

ignore:
	$(MAKE) --no-print-directory -C libft
	$(MAKE) --no-print-directory -C mlx_linux
	${CC} ${SRCS} ${LIBFT} $(LIBX) $(LIBXFLAGS) -o ${NAME} -g

all: ${NAME}

clean:
		${RM} ${NAME}
		$(MAKE) --no-print-directory fclean -C libft
	$(MAKE) --no-print-directory clean -C mlx_linux


fclean:   clean
	make clean

re:     fclean all
