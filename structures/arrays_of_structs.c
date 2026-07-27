/*
 * array_of_structures.c
 *
 * Demonstrates:
 * 1. Declaring an array of structures
 * 2. Taking input for multiple records
 * 3. Displaying all records
 * 4. Updating a record
 */

#include <stdio.h>
#define MAX_STUDENTS 3
typedef struct
{
    int rollNo;
    char name[50];
    int age;
    float cgpa;
} Student;

int main(void)
{
    Student students[MAX_STUDENTS];
    int i;
     printf(" Enter Student Details \n\n");

     for (i = 0; i < MAX_STUDENTS; i++)
     {
        printf("Student %d\n", i + 1);

        printf("Roll Number : ");
        scanf("%d", &students[i].rollNo);

        printf("Name        : ");
        scanf("%49s", students[i].name);

        printf("Age         : ");
        scanf("%d", &students[i].age);

        printf("CGPA        : ");
        scanf("%f", &students[i].cgpa);

        printf("\n");
    }



    printf("\n Student Records \n\n");

    for (i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Roll Number : %d\n", students[i].rollNo);
        printf("Name        : %s\n", students[i].name);
        printf("Age         : %d\n", students[i].age);
        printf("CGPA        : %.2f\n\n", students[i].cgpa);
    }



    printf(" Updating First Student \n\n");

    students[0].age = 21;
    students[0].cgpa = 9.10f;

    printf("Updated Record: \n");
    printf("Roll Number : %d\n", students[0].rollNo);
    printf("Name        : %s\n", students[0].name);
    printf("Age         : %d\n", students[0].age);
    printf("CGPA        : %.2f\n", students[0].cgpa);

    return 0;
}