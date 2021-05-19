# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 21:35:47 by dramos-p          #+#    #+#              #
#    Updated: 2021/05/18 22:08:18 by dramos-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_bzero.c\
			ft_memcpy.c\
			ft_memset.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			main.c
CC		= gcc

OBJS	= ${SRCS:.c=.o}

CFLAGS= -Wall\
		-Werror\
		-Wextra

all:	${OBJS}
		${CC} -o programa.out ${CFLAGS} ${SRCS}

clean:
		rm -rf *.o