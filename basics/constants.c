/* demonstrating constants in c lang */
#include<stdio.h>
#define PI 3.145678
#define MAX_USERS 100
#define COMPANY "ABLAZE.LTD"

int main(void)
{
    // we use constants using the keyword "const"
    const int days_in_week = 7;
    const float GST = 18.0f;
    const char GRADE = 'A';
    
    // displaying the constants
    printf("days_in_week   : %d\n", days_in_week);
    printf("GST            : %.2f%%\n",GST);
    printf("grade          : %c\n",GRADE);
    
    /* we cannot modify the constant values again in the program
      and if we do it will show compilation errors  */

    printf("pi        : %f\n",PI);
    printf("max_users : %d\n",MAX_USERS);
    printf("company   : %s\n",COMPANY);
    
/*    const creates a read-only variable
      #define creates a macro using the preprocessor
      const has a data type.
      #define does not have a data type */

      return 0;
}