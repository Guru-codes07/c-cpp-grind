
#include <stdio.h>

struct Example {
    char a;
    int b;
    char c;
};

int main(void) {
    struct Example e;

    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));

    printf("\nStructure size: %zu bytes\n", sizeof(e));

    printf("\nMember addresses:\n");
    printf("Address of a: %p\n", (void *)&e.a);
    printf("Address of b: %p\n", (void *)&e.b);
    printf("Address of c: %p\n", (void *)&e.c);

    return 0;
}
