#include<stdio.h>
#define SIZE 5
/* Function declarations */
void print_array(int arr[], int size);
int sum_array(int arr[], int size);

int main(void)
{
    int numbers[SIZE] = {10,20,30,40,50};
    printf("Basic Array: \n");
    print_array(numbers,SIZE);

    // accessing and modifying elements
    printf("First element:  %d\n", numbers[0]);
    printf("Last element:   %d\n", numbers[SIZE - 1]);
    numbers[2] = 999;
    printf("After numbers[2] = 999:\n");
    print_array(numbers, SIZE);

    // looping through an array
    printf("\n=== Sum using a loop ===\n");
    int total = sum_array(numbers, SIZE);
    printf("Sum of elements = %d\n", total);

    // 2-D array
    int matrix[2][3] = {{1, 2, 3},{4, 5, 6}};
    for (int row = 0; row < 2; row++) 
    {
        for (int col = 0; col < 3; col++) 
        {
        printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}

void print_array(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


 


        








