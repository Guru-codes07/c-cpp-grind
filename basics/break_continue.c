/* To demonstrate how break andd continue statements work in c lang */
#include<stdio.h>
int main(void)
{
    int i;
    int choice;
    printf("The break statement:\n"); // in for loop
    for (i = 1; i <= 10; i++)
    {
      if (i == 6)
        {
            printf("Loop stopped at %d\n", i);
            break;
        }
      printf("%d\n", i);
    }

    printf("The continue statement:\n"); // in for loop
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        printf("%d\n", i);
    }
    
    printf("The break statement in while loop:\n");
    i = 1;
    while (1)
    {
        if (i > 5)
        {
            break;
        }

        printf("%d\n", i);
        i++;
    }

    printf("The continue statement in while loop:\n");
    i = 0;
    while (i < 10)
    {
        i++;

        if (i == 7)
        {
            continue;
        }

        printf("%d\n", i);
    }

    printf("The difference between these two:\n");
    printf("Using break:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        printf("%d ", i);
    }
    printf("\n\nUsing continue:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");
    return 0;
}