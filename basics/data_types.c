/*Demonstrating the fundamental data types in c lang */
#include<stdio.h>
#include<stdbool.h>

int main(void)
{
  // Integer types:
  int age = 19;
  int height = 179;
  int year = 2026;
  int temp = 33;

  // Float types:
  float pi = 3.1456;
  float gpa = 9.78;
  float dec = 6.7768780;

  // Char type:
  char letter = 'A';

  // Boolean type:
  bool student = true;

  // Displaying them:
    
    printf("********** Data Types **********\n\n");
    printf("age      : %d\n", age);
    printf("height   : %d\n",height);
    printf("year     : %d\n", year);
    printf("temp     : %d\n",temp);
    printf("pi       : %f\n", pi);
    printf("gpa      : %f\n", gpa);
    printf("dec      : %f\n", dec);
    printf("letter   : %c\n", letter);
    printf("bool     : %d\n", student);
    printf("\n");
    printf("********** Size of data types **********\n\n");
    printf("age      : %zu byte(s)\n", sizeof(age));
    printf("height   : %zu byte(s)\n", sizeof(height));
    printf("year     : %zu byte(s)\n", sizeof(year));
    printf("temp     : %zu byte(s)\n", sizeof(temp));
    printf("pi       : %zu byte(s)\n", sizeof(pi));
    printf("gpa      : %zu byte(s)\n", sizeof(gpa));
    printf("dec      : %zu byte(s)\n", sizeof(dec));
    printf("letter   : %zu byte(s)\n", sizeof(letter));
    printf("bool     : %zu byte(s)\n", sizeof(student));

    return 0;

}