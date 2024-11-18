#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory for 5 integers using malloc
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Input the first 5 integers
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of element %d: ", i);
        scanf("%d", arr + i);
    }

    // Sort the first 5 integers
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("The sorted array first 5 elements is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Reallocate memory for 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Input the next 5 integers
    for (int i = 5; i < 10; i++)
    {
        printf("Enter the value of element %d: ", i);
        scanf("%d", arr + i);
    }

    // Sort all 10 integers
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    // Display the sorted array
    printf("The sorted array all 10 elements is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
