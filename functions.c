#include<stdio.h>
// function declarations
void greet(void);
void printLine(void);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

int main(void)
{

    int num1, num2;
    printLine();
    printf("FUNCTIONS IN C\n");
    printLine();
    /* Calling a void function */
    greet();
    printf("\nEnter two integers: ");
    scanf("%d %d", &num1, &num2);
    /* Calling functions with parameters */
    printf("\nAddition       : %d\n", add(num1, num2));
    printf("Subtraction    : %d\n", subtract(num1, num2));
    printf("Multiplication : %d\n", multiply(num1, num2));
    if (num2 != 0)
    {
        printf("Division       : %.2f\n", divide(num1, num2));
    }
    else
    {
        printf("Division       : Cannot divide by zero.\n");
    }
    printLine();
    return 0;
}

/* Void Function */
void greet(void)
{
    printf("\nHello, Welcome to C Programming!\n");
}

/* Function without Parameters */
void printLine(void)
{
    printf("----------------------------------------\n");
}

/* Function with Parameters and Return Value */
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}