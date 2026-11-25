
#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main(void) {

    const struct Student s1 = {101, 85.5};

    printf("Student ID: %d\n", s1.id);
    printf("Student Marks: %.2f\n", s1.marks);

    // Trying to modify a const structure
    // s1.id = 102;  // Error!
    // s1.marks = 90.0;  // Error!

    printf("\nStructure cannot be modified because it is const.\n");

    return 0;
}
