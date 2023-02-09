# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:01:04 by paugonca          #+#    #+#              #
#    Updated: 2023/02/09 15:07:54 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#------------------------------ LIBRARY NAME ----------------------------------#

NAME	= libft.a

#----------------------------- COMMAND LINES ----------------------------------#

RM	= rm -rf
MV	= mv
MKD	= mkdir
CPY	= cp
PRINT	= printf

#------------------------------ DIRECTORIES -----------------------------------#

_SRC	=
_OBJ	=	../obj/
_LIBS	=	../libs/

#-------------------------------- COMPILER ------------------------------------#

CC	= gcc
CF	= -Wall -Wextra -Werror
AR	= ar rcs

#---------------------------------- FILES -------------------------------------#

FILES	=		ft_atoi.c \
				ft_isdigit.c

SRCS	=		$(addprefix $(_SRC), $(FILES))
OBJS	=		$(patsubst $(_SRC)%.c,$(_OBJ)%.o,$(SRCS))

#---------------------------------- RULES -------------------------------------#

all: $(NAME)

$(NAME) : $(_LIBS)$(NAME)

$(_OBJ)%.o: $(_SRC)%.c
	$(CC) $(CF) -c $< -o $@

$(_LIBS)$(NAME): $(_LIBS) $(_OBJ) $(OBJS)
	$(AR) $(_LIBS)$(NAME) $(OBJS)

#---------------------------- DIRECTORIES CREATION ---------------------------#

$(_OBJ):
	$(MKD) $(_OBJ)

$(_LIBS):
	$(MKD) $(_LIBS)

$(_SRC):
	$(MKD) $(_SRC)

#---------------------------------- CLEAN ------------------------------------#

clean:
		$(RM) $(_OBJ)$(OBJS)

fclean: clean
		$(RM) $(_LIBS)$(NAME)

#---------------------------------- REST -------------------------------------#

re:	fclean all

.PHONY: all clean fclean re
