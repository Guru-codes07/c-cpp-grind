/* Demonstrate switch case in c lang */
#include<stdio.h>
int main(void)
{
    int choice;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Check Day\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

      switch (choice)
    {
        case 1:
        {
            int a, b;
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Result = %d\n", a + b);
            break;
        }

        case 2:
        {
            int a, b;
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Result = %d\n", a - b);
            break;
        }

        case 3:
        {
            int a, b;
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Result = %d\n", a * b);
            break;
        }

        case 4:
        {
            float a, b;
            printf("\nEnter two numbers: ");
            scanf("%f %f", &a, &b);

            if (b == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result = %.2f\n", a / b);
            }

            break;
        }

        case 5:
        {
            // implementing switch inside a switch case 

            int day;

            printf("\nEnter a number (1-7): ");
            scanf("%d", &day);

            switch (day)
            {
                case 1:
                    printf("Monday\n");
                    break;
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
                default:
                    printf("Invalid day.\n");
            }

            break;
        }

        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}