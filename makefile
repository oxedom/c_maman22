# makefile

mainmat: mainmat.c mymat.c
	gcc -o mainmat -Wall -ansi -pedantic -I . mainmat.c mymat.c 

clean:
	rm mainmat
