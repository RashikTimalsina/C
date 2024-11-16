// Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, i, sum = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("\nMemory allocation failed");
        exit(0);
    }
    printf("\nEnter %d values: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    printf("\nSum = %d\n", sum);
    free(ptr);
    return 0;
}