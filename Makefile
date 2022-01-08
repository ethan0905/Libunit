# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 14:13:00 by esafar            #+#    #+#              #
#    Updated: 2022/01/08 14:13:02 by esafar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

SRCS = libunit.c
FLAGS = -Werror -Wextra -Wall

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	cc ${FLAGS} ${OBJS} -I includes -o ${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME}

re:	fclean all
