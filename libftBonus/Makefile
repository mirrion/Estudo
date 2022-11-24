# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 13:27:00 by rosantan          #+#    #+#              #
#    Updated: 2022/05/04 14:05:29 by rosantan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_itoa.c\
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c ft_striteri.c \
					ft_putstr_fd.c ft_substr.c ft_strtrim.c ft_strjoin.c ft_split.c ft_strmapi.c

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS		= ${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS:.c=.o}

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
RM		= rm -f
AR		= ar rc
RN		= ranlib

NAME 	= libft.a

all: 		${NAME}

${NAME}: 	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				${AR} $(NAME) $(OBJS) $(BONUS_OBJS)

so: all
	gcc -o libft.so -shared -fPIC $(OBJS)
