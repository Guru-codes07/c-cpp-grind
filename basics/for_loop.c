/* To demonstrate for loop in c lang and how it works  */
#include<stdio.h>
int main(void)
{
    int n = 10;
    int m = 1;
    printf("Printing numbers from 1 to 10\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
   
    printf("Printing numbers in reverse order from 10 to 1\n");
    for(int i=10;i>=m;i--)
    {
        printf("%d\n",i);
    }

    printf("Multiplication table \n");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n\n",num, i, num * i);
    }

    // Nested for loop
        for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("* ");
        }

        printf("\n");
    }
    
    return 0;
}