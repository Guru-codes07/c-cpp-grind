#include<stdio.h>
#include<strings.h>
struct Address
{
    char city[50];
    char state[50];
    int pincode;
};

struct Student
{
    char name[50];
    int age;
    float cgpa;
    struct Address address;
};


int main(void)
{
   

    struct Student student1 =
    {
        "Guru",
        20,
        8.75f,
        {
            "Chennai",
            "Tamil Nadu",
            600001
        }
    };

    printf("Student Details\n\n");

    printf("Name     : %s\n", student1.name);
    printf("Age      : %d\n", student1.age);
    printf("CGPA     : %.2f\n", student1.cgpa);

    printf("\nAddress\n");
    printf("-------\n");
    printf("City     : %s\n", student1.address.city);
    printf("State    : %s\n", student1.address.state);
    printf("Pincode  : %d\n", student1.address.pincode);


    printf("\n Updating Address\n\n");

    strcpy(student1.address.city, "Bengaluru");
    strcpy(student1.address.state, "Karnataka");
    student1.address.pincode = 560001;

    printf("Updated Address\n");
    printf("----------------\n");
    printf("City     : %s\n", student1.address.city);
    printf("State    : %s\n", student1.address.state);
    printf("Pincode  : %d\n", student1.address.pincode);

    return 0;
}
