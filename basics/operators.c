/* To demonstrate the operators in c lang */
#include<stdio.h>
int main(void)
{
    // arithmetic operators:
    int a = 20;
    int b = 34;
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %d\n", a / b);
    printf("Modulus        : %d\n", a % b);

    // assignment operator
    // used to assign a value to a variable
    
    int x = 10;
    printf("Initial x = %d\n", x);
     x += 5;
    printf("x += 5  -> %d\n", x);
     x -= 2;
    printf("x -= 2  -> %d\n", x);
    x *= 3;
    printf("x *= 3  -> %d\n", x);
     x /= 2;
    printf("x /= 2  -> %d\n", x);
    x %= 4;
    printf("x %%= 4 -> %d\n", x);

    // relational operators
    // describes the relation between two variables
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // logical operators
    // includes and , or , not.
    printf("(a > 5 && b < 5) : %d\n", (a > 5 && b < 5));
    printf("(a < 5 || b < 5) : %d\n", (a < 5 || b < 5));
    printf("!(a > b)         : %d\n", !(a > b));

    // increament and decreament
    int num = 5;
    printf("Initial value : %d\n", num);
    printf("Post Increment (num++) : %d\n", num++);
    printf("Value after post++     : %d\n", num);
    printf("Pre Increment (++num)  : %d\n", ++num);
    printf("Post Decrement (num--) : %d\n", num--);
    printf("Value after post--     : %d\n", num);
    printf("Pre Decrement (--num)  : %d\n", --num);

    // Bitwise operator
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    //Operator Precedence

    int result1 = 2 + 3 * 4;
    int result2 = (2 + 3) * 4;
    printf("2 + 3 * 4     = %d\n", result1);
    printf("(2 + 3) * 4   = %d\n", result2);

    return 0;
  

}