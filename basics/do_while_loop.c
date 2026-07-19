/* To demonstrate do while in c lang */
#include<stdio.h>
int main(void)
{
    int i;
    int choice;
    printf("Basic do while loop:\n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);
    i = 10;
    printf("Reverse counting:\n");
    do
    {
        printf("%d\n", i);
        i--;
    }
    while (i >= 1);
    printf("Even numbers from 1 to 10:\n");
    i = 2;
    do
    {
        printf("%d ", i);
        i += 2;
    }
    while (i <= 20);

    // to show the difference 
    printf("Difference between while and do while loop \n");
    i = 10;
    printf("Condition: i < 5\n");
    printf("Initial value of i = %d\n\n", i);
    printf("Using while:\n");
     while (i < 5)
    {
        printf("This will never be printed.\n");
    }
    printf("Using do-while:\n");
      do
    {
    printf("This is printed once because the loop executes before checking the condition.\n");
    }
    while (i < 5);

 return 0;

}