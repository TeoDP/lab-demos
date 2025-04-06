AS = nasm
ASF = -g -f elf32 -F dwarf
CC = gcc
CCF = -g -Wall -Werror -m32 -no-pie

all: define padding

define:
	$(AS) $(ASF) defining_structures.asm -o defining_structures.o
	$(CC) $(CCF) defining_structures.o -o def_struct

padding:
	$(CC) $(CCF) display_padding.c -o padding


clean:
	rm *.o || true
	rm padding def_struct || true
