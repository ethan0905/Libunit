# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 13:16:20 by esafar            #+#    #+#              #
#    Updated: 2022/01/09 13:16:52 by esafar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all re clean fclean

NAME = libunit.a

RADIX = launch_tests load_test clean_list pipe
DIR = ./
SRC = $(addprefix $(DIR), $(addsuffix .c, $(RADIX)))
OBJ = $(addprefix $(DIR), $(addsuffix .o, $(RADIX)))
HDR = $(addprefix $(DIR), libunit.h)

SRC_LIB = ./utils/srcs/ft_putstr_fd.c \
			./utils/srcs/ft_putnbr_fd.c \
			./utils/srcs/ft_putchar_fd.c \
			./utils/srcs/ft_strlen.c \
			./utils/srcs/ft_bzero.c \
			./utils/srcs/ft_memset.c \
			./utils/srcs/ft_memcmp.c \
			./utils/srcs/ft_strequ.c \

OBJ_LIB = ${SRC_LIB:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) ${OBJ_LIB}
	ar rcs ${NAME} ${OBJ} ${OBJ_LIB}
	mv ${NAME} ../.

$(DIR)%.o : $(DIR)%.c $(HDR)
	@$(CC) $(CFLAGS) -c $< -I $(DIR) -o $@

clean :
	@rm -f $(OBJ) ../libunit.a

fclean : clean
	@rm -f $(NAME)

re : fclean all

