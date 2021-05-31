# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 21:35:47 by dramos-p          #+#    #+#              #
#    Updated: 2021/05/31 15:49:19 by dramos-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MAKE = make --no-print-directory
TEST_DIR = test

SRCS	=	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa

CC		= gcc

OBJS	= ${SRCS:.c=.o}

CFLAGS= -Wall\
		-Werror\
		-Wextra

all:	${NAME}

$(NAME):	${OBJS}
	ar -rcs ${NAME} ${OBJS}

$(OBJS):	${SRCS}
	${CC} ${CFLAGS} -c ${SRCS}

test:
		${CC} -o programa.out ${CFLAGS} ${SRCS}

clean:
		rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re:	fclean all