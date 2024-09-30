# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zm <zm@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 07:04:50 by zm                #+#    #+#              #
#    Updated: 2024/09/30 18:21:16 by zoentifi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

files.c = $(shell ls *.c)

files.o = $(shell ls *.o)

main: OBJ
	@$(CC) $(FLAGS) $(files.o) -o main

OBJ:
	@$(CC) $(files.c) -c
	
clean:
	@rm -rf *.o main

norm:
	@norminette -R CheckDefine
