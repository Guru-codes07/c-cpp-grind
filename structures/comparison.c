
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[30];
    float marks;
};

int main(void) {
    struct Student s1 = {101, "Guru", 85.5};
    struct Student s2 = {101, "Guru", 85.5};

    if (s1.id == s2.id &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {

        printf("Both structures are equal.\n");

    } else {
        printf("Structures are different.\n");
    }

    return 0;
}
