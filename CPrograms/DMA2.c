//Two dimensional array with value stored and displayed using calloc function and free

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r =3, ptr, c =3;
    int *arr = (int *)calloc(r * c, sizeof(int));
    int count =0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0;j < c;j++)
        {
            *(arr + i * c +j) = ++count;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(arr + i * c + j));
        }
        printf("\n");
    }
    free(arr);
    return 0;
}