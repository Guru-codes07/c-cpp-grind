#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int initialSize;
    int newSize;
    printf("Enter initial array size: ");
    scanf("%d", &initialSize);

    arr = (int *)malloc(initialSize * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d integers:\n", initialSize);

    for (int i = 0; i < initialSize; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array:\n");

    for (int i = 0; i < initialSize; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("\nEnter new array size: ");
    scanf("%d", &newSize);

    int *temp = realloc(arr, newSize * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed!\n");
        free(arr);
        return 1;
    }

    arr = temp;

    if (newSize > initialSize)
    {
        printf("\nEnter %d new elements:\n", newSize - initialSize);

        for (int i = initialSize; i < newSize; i++)
        {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }

    printf("\nUpdated Array:\n");

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    free(arr);
   
  arr = NULL;
  printf("\nMemory has been freed.\n");

  return 0;
}
