# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 21:35:47 by dramos-p          #+#    #+#              #
#    Updated: 2021/06/09 00:12:44 by dramos-p         ###   ########.fr        #
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
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

SRCSB	=	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

CC		= gcc

OBJS	= ${SRCS:.c=.o}

OBJSB	= ${SRCSB:.c=.o}

CFLAGS= -Wall\
		-Werror\
		-Wextra

all:	${NAME}

$(NAME):	${OBJS}
	ar -rcs ${NAME} ${OBJS}

bonus:	${OBJSB}
	ar -rcs ${NAME} ${OBJSB}

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re:	fclean all