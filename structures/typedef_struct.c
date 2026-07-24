#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    int age;
    float cgpa;
} Student;

typedef struct
{
    char title[50];
    char author[50];
    float price;
} Book;

int main(void)
{
  

    Student student1;

    strcpy(student1.name, "Guru");
    student1.age = 20;
    student1.cgpa = 8.75f;

    printf("Student Details\n\n");

    printf("Name : %s\n", student1.name);
    printf("Age  : %d\n", student1.age);
    printf("CGPA : %.2f\n", student1.cgpa);

 

    Student student2 = {"Rahul", 21, 9.15f};

    printf("\nStudent 2\n\n");

    printf("Name : %s\n", student2.name);
    printf("Age  : %d\n", student2.age);
    printf("CGPA : %.2f\n", student2.cgpa);

   

    student2.age = 22;
    student2.cgpa = 9.35f;

    printf("\nUpdated Student 2\n\n");

    printf("Age  : %d\n", student2.age);
    printf("CGPA : %.2f\n", student2.cgpa);



    Book book1 = {
        "The C Programming Language",
        "Kernighan & Ritchie",
        499.99f
    };

    printf("\nBook Details \n\n");

    printf("Title  : %s\n", book1.title);
    printf("Author : %s\n", book1.author);
    printf("Price  : Rs. %.2f\n", book1.price);

   

    Student students[2] =
    {
        {"Alice", 19, 8.90f},
        {"Bob", 20, 8.40f}
    };

    printf("\n Array of Students\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name : %s\n", students[i].name);
        printf("Age  : %d\n", students[i].age);
        printf("CGPA : %.2f\n\n", students[i].cgpa);
    }

    return 0;
}