#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    int age;
    float cgpa;
} Student;

int main(void)
{
   

    Student student1 = 
    {
        "Guru",
        20,
        8.75f
    };

    

    Student *ptr = &student1;

    printf(" Pointer to Structure\n\n");

    printf("Structure Address : %p\n", (void *)&student1);
    printf("Pointer Value     : %p\n\n", (void *)ptr);
    printf(" Using -> Operator \n\n");
    printf("Name : %s\n", ptr->name);
    printf("Age  : %d\n", ptr->age);
    printf("CGPA : %.2f\n", ptr->cgpa);
    printf("\n Using (*ptr).member\n\n");
    printf("Name : %s\n", (*ptr).name);
    printf("Age  : %d\n", (*ptr).age);
    printf("CGPA : %.2f\n", (*ptr).cgpa);
    printf("\n Updating Structure \n\n");

    strcpy(ptr->name, "Rahul");
    ptr->age = 21;
    ptr->cgpa = 9.10f;

    printf("Updated Name : %s\n", student1.name);
    printf("Updated Age  : %d\n", student1.age);
    printf("Updated CGPA : %.2f\n", student1.cgpa);
    printf("\n Comparison \n\n");
    printf("Dot Operator        : %s\n", student1.name);
    printf("Arrow Operator      : %s\n", ptr->name);
    printf("(*Pointer).Member   : %s\n", (*ptr).name);

    return 0;
}