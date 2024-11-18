//WAP to calculate the sum of five integers from user using realloc function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", arr + i);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += *(arr + i);
    }
    printf("The sum of the five integers is %d \n", sum);

    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }

    for (int i = 5; i < 10; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", arr + i);
    }

    for (int i = 5; i < 10; i++)
    {
        sum += *(arr + i);
    }
    printf("The sum of the five integers is %d", sum);

    free(arr);

   
    
    return 0;
}