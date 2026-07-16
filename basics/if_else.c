/* To demonstrate how if-else condition works and its syntax , conditional 
statements and then gradually decision making statements */
#include<stdio.h>
int main(void)
{
    int marks;
    int age;
    int number;

    // simple if 
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible to vote \n");
    }

    // if-else
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    // if-else ladder 
   printf("Enter your marks (0-100): ");
   scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Grade: O\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: A+\n");
    }
    else if (marks >= 70)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("Fail\n");
    }

    // nested if

    if (age >= 18)
    {
        if (marks >= 50)
        {
            printf("You are eligible for admission.\n");
        }
        else
        {
            printf("Marks are insufficient.\n");
        }
    }
    else
    {
        printf("Age requirement not met.\n");
    }

    return 0;
}