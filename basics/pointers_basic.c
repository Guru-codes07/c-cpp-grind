#include <stdio.h>

int main(void)
{
    int number = 25;
    int *ptr = &number;

    printf("Pointers Basic: \n");
    printf("Value of number          : %d\n", number);
    printf("Address of number        : %p\n", (void *)&number);
    printf("Value stored in pointer  : %p\n", (void *)ptr);
    printf("Value using pointer      : %d\n", *ptr);
    
    printf("\n Modifying Through Pointer \n\n");
    *ptr = 100;
    printf("New value of number      : %d\n", number);
    printf("Value using pointer      : %d\n", *ptr);
    
    printf("Another Example: \n");
    int age = 20;
    int *agePtr = &age;
    printf("Age                      : %d\n", age);
    printf("Address of age           : %p\n", (void *)&age);
    printf("Pointer value            : %p\n", (void *)agePtr);
    printf("Dereferenced value       : %d\n", *agePtr);
    *agePtr = 21;
    printf("Updated age              : %d\n", age);

    // NULL pointer
    printf("NULL Pointer \n");
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
