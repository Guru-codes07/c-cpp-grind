
#include <stdio.h>

struct Student {
    int id;
    char grade;
    float marks;
};

int main(void) {
    struct Student s1;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));

    printf("\nSize of structure: %zu bytes\n", sizeof(struct Student));

    return 0;
}
