SRCS	= ${wildcard src/*.c}
OBJS	= ${SRCS:.c=.o}
INS = includes
NAME 	= libft.a
CC		= gcc
RM		= rm -f
AR		= ar rc
RN		= ranlib
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INS}

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

norm :
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h
