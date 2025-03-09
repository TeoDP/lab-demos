#include <stdio.h>
#include <stdlib.h>

void segfault_generator() {
	int* x[100];
	for (int i = 0; i < 100; i++) {
		printf("x[%d] = %p\n*x[%d] = %d\n\n", i, x[i], i, *x[i]);
	}
	return;
}

void insufficient_calloc() {
	int* x = calloc(16, 1);
	for (int i = 0; i < 16; i++) {
		printf("element %d = %d\n", i, x[i]);
	}
	return;
}


int main (int argc, char** argv) {
	insufficient_calloc();
	segfault_generator();

	return 0;
}
