#include<stdio.h>
#include<strings.h>
struct Student
{
    char name[50];
    int age;
    float gpa;
};

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};

int main(void)
{
    struct Student student1;

    strcpy(student1.name, "Guru");
    student1.age = 20;
    student1.gpa = 8.75f;

    printf("===== Student 1 =====\n\n");

    printf("Name : %s\n", student1.name);
    printf("Age  : %d\n", student1.age);
    printf("GPA  : %.2f\n", student1.gpa);
    struct Student student2 = {"Rahul", 21, 9.10f};

    printf("\n===== Student 2 =====\n\n");

    printf("Name : %s\n", student2.name);
    printf("Age  : %d\n", student2.age);
    printf("GPA  : %.2f\n", student2.gpa);


    printf("\n===== Updating Student 2 =====\n\n");

    student2.age = 22;
    student2.gpa = 9.30f;

    printf("Updated Age : %d\n", student2.age);
    printf("Updated GPA : %.2f\n", student2.gpa);


    struct Student students[3] =
    {
        {"Alice", 19, 8.50f},
        {"Bob", 20, 7.90f},
        {"Charlie", 21, 9.20f}
    };

    printf("\n===== Array of Structures =====\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name : %s\n", students[i].name);
        printf("Age  : %d\n", students[i].age);
        printf("GPA  : %.2f\n\n", students[i].gpa);
    }
    
    struct Employee emp =
    {
        "John",
        1001,
        {15, 7, 2025}
    };

    printf("===== Nested Structure =====\n\n");

    printf("Employee Name : %s\n", emp.name);
    printf("Employee ID   : %d\n", emp.id);
    printf("Joining Date  : %02d-%02d-%04d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}
