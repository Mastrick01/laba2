all: labmain.o laba00.o func.o
	gcc labmain.o laba00.o func.o -o prog
func.o: func.c
	gcc -c func.c
labmain.o: labmain.c
	gcc -c labmain.c
laba00.o: laba00.c
	gcc -c laba00.c