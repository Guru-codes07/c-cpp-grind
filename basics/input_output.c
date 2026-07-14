/* To demonstrate the input and output operations in c lang */
#include <stdio.h>
int main(void)
{
    /* variable declaration where we are going to store the values from
    the user */
    int age;
    float gpa;
    char grade;
    char name[50];

    /* taking the input from the user, we use scanf() */
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("your age is %d\n",age);
    
    printf("Enter your GPA: ");
    scanf("%f",&gpa);
    printf("your GPA is %f\n",gpa);

    printf("Enter your grade: ");
    scanf(" %c",&grade);
    printf("your grade is %c\n",grade);
    /* the gap before %c in the scanf is required
    it tells the scanf() to ignore any leftover newline characters */

    printf("Enter your good name: ");
    scanf("%49s",&name);
    printf("Hello, %s\n", name);

    return 0;

}