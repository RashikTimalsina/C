#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i, j, temp;

    printf("How many numbers? ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\nEnter numbers:\n");
    for (i = 0; i < n; i++)
        scanf("%d", (a + i));

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }

    printf("\nSorted list is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", *(a + i));
    printf("\n");

    free(a);
    return 0;
}