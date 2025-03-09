#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	void* p_void = NULL;
	char* p_char = NULL;
	short* p_short = NULL;
	int* p_int = NULL;
	printf("p_void = %p\np_char = %p\np_short = %p\np_int = %p\n",
			p_void, p_char, p_short, p_int);
	getchar();
	printf("p_void + 1 = %p\n", p_void + 1);
	getchar();
	printf("p_char + 1 = %p\n", p_char + 1);
	getchar();
	printf("p_short + 1 = %p\n", p_short + 1);
	getchar();
	printf("P_int + 1 = %p\n", p_int + 1);

	return 0;
}
