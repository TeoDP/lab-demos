#include <stdio.h>
#include <stdlib.h>

typedef struct type1 {
    char v1;
    int v2;
    char v3;
    int v4;
    char v5;
    int v6;
    char v7;
    int v8;
} Type1;

typedef struct type2 {
    char v1, v3, v5, v7;
    int v2, v4, v6, v8;
} Type2;

typedef struct type3{
    char v1;
    int v2;
    char v3;
    int v4;
    char v5;
    int v6;
    char v7;
    int v8;
}__attribute__((packed)) Type3;

typedef struct type4 {
    char v1, v3, v5, v7;
    int v2, v4, v6, v8;
}__attribute__((packed)) Type4;

int main() {

    printf("Size of structure type 1 = %u\n", sizeof(Type1));
    printf("Size of strucutre type 2 = %u\n", sizeof(Type2));
    printf("Size of strucutre type 3 = %u\n", sizeof(Type3));
    printf("Size of strucutre type 4 = %u\n", sizeof(Type4));

    return 0;
}