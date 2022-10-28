FLAG = -std=c11 -Wall -Werror -Wextra -pedantic
debug1: debug1.o
	gcc $(FLAG) -o debug1 debug1.o  
debugl.o: debug1.c debugl.h 
	gcc $(FLAG) -c debug1.c  
debug2: debug2.o
	gcc $(FLAG) -o debug2 debug2.o  
debug2.o: debug2.c debug2.h 
	gcc $(FLAG) -c debug2.c  
	