# makefile

mainmat: mainmat.c mymat.c
	gcc -o mainmat mainmat.c mymat.c -I.

clean:
	rm mainmat
