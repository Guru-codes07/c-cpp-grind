#include<stdio.h>

// local variable demo
   void demo(void)
   {
      int fav_num = 7;
      printf("arshiya's favourite number is: %d\n",fav_num);
   }

int main()
{
   // variable declaration
    int x;	
    int y;
    double pi;
    char grade;
    float gpa;
    int aliya_age;
    int arshiya_age;
    int store; // the variable which will store an "int"

   // variable initialisation:
    x = 1;
    y = 26;
    pi = 3.1456782;
    grade = 'A';
    gpa = 8.58;
    aliya_age = 18;
    arshiya_age = 19;

   printf("the value of x is : %d\n",x);
   printf("the value of y is : %d\n",y);
   printf("the value of pi is : %f\n",pi);
   printf("the value of gpa is : %f\n",gpa);
   printf("your grade is: %c\n",grade);
   printf("Arshiya's age is:  %d\n",arshiya_age);
   printf("Aliya's age is: %d\n",aliya_age);
   
   // updating the variables
   aliya_age = 20;
   arshiya_age = 21;
   grade = 'O';
   
   demo();

   printf("enter any number: ");
   scanf("%d",&store);
   printf("the entered number is: %d\n",store);

    
    return 0;
}

  

