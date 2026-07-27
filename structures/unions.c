#include <stdio.h>
typedef struct
{
    int id;
    float salary;
    char grade;
} EmployeeStruct;
typedef union
{
    int id;
    float salary;
    char grade;
} EmployeeUnion;

int main(void)
{
    EmployeeStruct employeeStruct;
    EmployeeUnion employeeUnion;


    employeeStruct.id = 101;
    employeeStruct.salary = 55000.50f;
    employeeStruct.grade = 'A';

    printf(" Structure \n\n");

    printf("ID      : %d\n", employeeStruct.id);
    printf("Salary  : %.2f\n", employeeStruct.salary);
    printf("Grade   : %c\n", employeeStruct.grade);

    printf("Size of Structure : %zu bytes\n", sizeof(employeeStruct));



    printf("\n Union \n\n");

    employeeUnion.id = 101;
    printf("ID      : %d\n", employeeUnion.id);

    employeeUnion.salary = 55000.50f;
    printf("Salary  : %.2f\n", employeeUnion.salary);

    employeeUnion.grade = 'A';
    printf("Grade   : %c\n", employeeUnion.grade);

    printf("Size of Union : %zu bytes\n", sizeof(employeeUnion));

 

    printf("\n Memory Sharing \n\n");

    employeeUnion.id = 500;

    printf("After assigning ID\n");
    printf("ID      : %d\n", employeeUnion.id);

    employeeUnion.salary = 65000.75f;

    printf("\nAfter assigning Salary\n");
    printf("Salary  : %.2f\n", employeeUnion.salary);

    employeeUnion.grade = 'B';

    printf("\nAfter assigning Grade\n");
    printf("Grade   : %c\n", employeeUnion.grade);

    printf("\nNotice that only the last assigned member holds a valid value.\n");

    return 0;
}