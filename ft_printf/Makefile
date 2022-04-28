# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 12:09:11 by rosantan          #+#    #+#              #
#    Updated: 2022/04/28 11:47:17 by rosantan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT 		= ./libft/libft.a
NAME 	= libftprintf.a
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
			${CC} ${CFLAGS} -c *.c
			$(MAKE) -C ./libft
			cp libft/libft.a $(NAME)
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

all: 		${NAME}

clean:
			$(MAKE) clean -C ./libft
			${RM} ${OBJS}

fclean: 	clean
			$(MAKE) fclean -C ./libft
			${RM} ${NAME}

re: 		fclean all
