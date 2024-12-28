# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 19:29:02 by dangtran          #+#    #+#              #
#    Updated: 2024/12/20 20:45:02 by dangtran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc

CFLAGS= -Wall -Wextra -Werror -I${HEADER_DIR}

SRCS_DIR = 	./srcs/

SRCS_OBJ = ${SRCS_DIR:.c=.o}

HEADER_DIR=./includes/

NAME= **.a

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -Imlx_linux -O3 -c $< -o $@ 

${NAME} : ${SRCS_OBJ}
	ar rc ${NAME} ${SRCS_OBJ}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all