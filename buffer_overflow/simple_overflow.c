#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define SIZE 100
char* gets(char *s);

struct s1 {
    char bf1[12];
    int a;
    int b;
    char bf2[32];
};

void hidden() {
    printf("This code should not be able to be executed\n");
    return;
}

void operation() {
    char buffer1[12];
    gets(buffer1);

    return;
}

int main() {
    // char buffer1[10];
    // int a = 5;
    // int b = 10;
    // char buffer2[100] = "The quick brown fox jumps over the lazy dog.";

    // gets(buffer1);
    // printf("buffer1 = %s\n", buffer1);
    // printf("a = %d\nb = %d\n", a, b);
    // printf("buffer2 = %s\n", buffer2);
    
    struct s1 ex;
    ex.a = 5;
    ex.b = 10;
    strcpy(ex.bf2, "Hello World!");
    gets(ex.bf1);
    printf("buffer1 = %s\na = %d\nb = %d\nbuffer2 = %s\n", ex.bf1, ex.a, ex.b, ex.bf2);

    operation();

    return 0;
}