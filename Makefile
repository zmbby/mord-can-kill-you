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
