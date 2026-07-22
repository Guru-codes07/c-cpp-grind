#include <stdio.h>

int main(void)
{
    int number = 25;
    int *ptr = &number;

    printf("===== Pointer Basics =====\n\n");

    printf("Value of number          : %d\n", number);
    printf("Address of number        : %p\n", (void *)&number);
    printf("Value stored in pointer  : %p\n", (void *)ptr);
    printf("Value using pointer      : %d\n", *ptr);

    /* =====================================
       Modifying Variable Using Pointer
       ===================================== */

    printf("\n===== Modifying Through Pointer =====\n\n");

    *ptr = 100;

    printf("New value of number      : %d\n", number);
    printf("Value using pointer      : %d\n", *ptr);

    /* =====================================
       Another Pointer Example
       ===================================== */

    printf("\n===== Another Example =====\n\n");

    int age = 20;
    int *agePtr = &age;

    printf("Age                      : %d\n", age);
    printf("Address of age           : %p\n", (void *)&age);
    printf("Pointer value            : %p\n", (void *)agePtr);
    printf("Dereferenced value       : %d\n", *agePtr);

    *agePtr = 21;

    printf("Updated age              : %d\n", age);

    /* =====================================
       NULL Pointer
       ===================================== */

    printf("\n===== NULL Pointer =====\n\n");

    int *nullPtr = NULL;

    printf("NULL Pointer             : %p\n", (void *)nullPtr);

    /*
     * Never dereference a NULL pointer.
     *
     * Example (Do NOT do this):
     *
     * printf("%d\n", *nullPtr);
     *
     * It results in undefined behavior
     * and will usually crash the program.
     */

    return 0;
}