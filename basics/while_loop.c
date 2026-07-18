/* To demonstrate while loop in c lang */
#include<stdio.h>
int main(void)
{
    int i;
    int n;
    int sum;

    printf("Basic while loop\n");
    i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    printf("reversing the numbers using basic while loop\n");
    i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    
    printf("Even Numbers (1-20)\n\n");
    i = 2;
    while (i <= 20)
    {
        printf("%d\n", i);
        i += 2;
    }

    // we can do the things that we do using for loop in while loop too
    printf("Multiplication table\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}


