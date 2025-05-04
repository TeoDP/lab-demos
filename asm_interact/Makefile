build: asm main

main:
	cc -Wall -g -m32 -no-pie main.c rotate.o -o test

asm:
	nasm -g -f elf32 -F dwarf ./rotate_left.asm -o rotate.o

clean: 
	rm *.o ./test
