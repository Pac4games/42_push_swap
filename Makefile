# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 14:16:55 by paugonca          #+#    #+#              #
#    Updated: 2023/02/09 16:22:27 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### PROGRAM #####

NAME	= push_swap

##### TERMINAL COMMANDS #####

RMV		= rm -f
MKD		= mkdir
MKE 	= make
CPY 	= cp

##### DIRECTORIES #####

_SRC 	= src/
_OBJ 	= obj/
_LIB 	= libs/
_BIN 	= ./

##### COMPILING #####

CC 		= cc
CFLAGS 	= -Wall -Wextra -Werror -g

SRC 	= $(_SRC)/main.c \
		  $(_SRC)/check_args.c

OBJS 	= $(patsubst $(_SRC)%.c,$(_OBJ)%.o,$(SRCS))
DEPS	= $(_BIN)/libs/libft.a
LIBS	= -lft

##### DEPENDENCIES #####

./libs/libft.a:
	$(MKE) -C libft/

##### STRUCTURE #####

$(_BIN):
	$(MKD) $(_BIN)libs/libft.a

clean:
	$(RMV) -r $(_OBJ)

fclean: clean
	$(RMV) -r $(NAME)
	$(RMV) -r $(_LIB)libft.a

re: fclean all

.PHONY: all deps clean fclean re
