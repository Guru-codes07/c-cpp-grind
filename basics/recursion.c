#include<stdio.h>

/* Function Prototypes */
void countdown(int n);
int factorial(int n);
int fibonacci(int n);
int sum(int n);

int main(void)
{
    int number;
    printf("Recursion Demo:\n");
    printf("Countdown:\n");
    countdown(5);

    printf("\nEnter a number to find factorial: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d = %d\n",number,factorial(number));
    }

     printf("\nEnter a number to find Fibonacci: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        printf("Fibonacci(%d) = %d\n",number,fibonacci(number));
    }
     printf("\nEnter N to calculate sum: ");
    scanf("%d", &number);

    if (number < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Sum of first %d numbers = %d\n",number,sum(number));
    }

    return 0;
}
/* Countdown */

void countdown(int n)
{
    if (n == 0)
    {
        printf("Lift Off!\n");
        return;
    }

    printf("%d\n", n);

    countdown(n - 1);
}

/* Factorial */

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

/* Fibonacci */

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Sum of First N Natural Numbers */

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

