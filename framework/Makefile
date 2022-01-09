# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 13:16:20 by esafar            #+#    #+#              #
#    Updated: 2022/01/09 22:00:22 by esafar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

RADIX = launch_tests load_test clean_list pipe display_message
DIR = ./
# SRC = $(addprefix $(DIR), $(addsuffix .c, $(RADIX)))
SRC = load_test.c launch_tests.c clean_list.c pipe.c display_message.c
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
		./utils/srcs/ft_strcmp.c \

OBJ_LIB = ${SRC_LIB:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

RED                             =       \033[0;31m
GREEN                   =       \033[0;32m
NC                              =       \033[0m

all : $(NAME)

$(NAME) : $(OBJ) ${OBJ_LIB}
		@echo "$(GREEN)Objects created.$(NC)"
		@ar rcs ${NAME} ${OBJ} ${OBJ_LIB}
		@echo "$(GREEN)Program created.$(NC)"
		mv libunit.a ../.
		@echo "$(GREEN)Executable moved to root.$(NC)"

clean :
		@rm -f $(OBJ) $(OBJ_LIB)
		@echo "$(RED)Objects deleted.$(NC)"

fclean : clean
		@rm -f ../libunit.a
		@echo "$(RED)libunit.a deleted.$(NC)"

re : fclean all

.PHONY: all re clean fclean
