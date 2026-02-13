copyfile: copyfile.o
	clang -Wall copyfile.o -o copyfile

copyfile.o: copyfile.c
	clang -c -Wall copyfile.c

.PHONY: clear
clear:
	rm *.o
	rm copyfile
