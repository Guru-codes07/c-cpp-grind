
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nMemory allocated successfully.\n");

    printf("\nInitial values stored by calloc():\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("\nEnter %d integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    free(arr);
    arr = NULL;

    printf("\nMemory has been freed.\n");

    return 0;
}
