#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1000; // Allocate a larger array to observe the difference

    // Allocating memory using malloc() (does not initialize)
    int *arr_malloc = (int *)malloc(n * sizeof(int));
    if (arr_malloc == NULL)
    {
        printf("Memory allocation using malloc failed\n");
        return 1;
    }

    // Allocating memory using calloc() (initializes to zero)
    int *arr_calloc = (int *)calloc(n, sizeof(int));
    if (arr_calloc == NULL)
    {
        printf("Memory allocation using calloc failed\n");
        return 1;
    }

    // Set some values in the malloc array to see if they persist
    arr_malloc[0] = 10;
    arr_malloc[1] = 20;

    // Displaying values for malloc memory (should have initialized values)
    printf("\nMemory allocated using malloc (initialized values):\n");
    printf("arr_malloc[0] = %d\n", arr_malloc[0]);     // Should print 10
    printf("arr_malloc[1] = %d\n", arr_malloc[1]);     // Should print 20
    printf("arr_malloc[100] = %d\n", arr_malloc[100]); // Should be a random value, not zero

    // Displaying values for calloc memory (should be initialized to zero)
    printf("\nMemory allocated using calloc (initialized to zero):\n");
    printf("arr_calloc[0] = %d\n", arr_calloc[0]); // Should print 0
    printf("arr_calloc[1] = %d\n", arr_calloc[1]); // Should print 0

    // Free dynamically allocated memory
    free(arr_malloc);
    free(arr_calloc);

    return 0;
}
