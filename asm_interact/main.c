#include <stdio.h>

extern void rotate_left(unsigned int *val, unsigned char count);

int main() {
	unsigned int value;
	unsigned char count;
	printf("Value = ");
	scanf("%u", &value);
	printf("Count = ");
	scanf("%hhu", &count);
	rotate_left(&value, count);
	printf("value is now = %u\n", value);
	return 0;
}
