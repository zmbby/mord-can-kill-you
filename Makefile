file: file.o
	@cc *.o -o file

file.o: file.c
	@cc -c *.c -o file.o

file.c:
	@echo '#include<stdio.h>\n\nint main(){\n\tprintf("hello, zoubair");\n\treturn 0;\n}' > file.c

clean:
	@rm -rf *.o
