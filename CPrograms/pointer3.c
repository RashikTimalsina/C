#include <stdio.h>

void show(int p1[][2], int p2[][2], int arr3[][2], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr3[i][j] = p1[i][j] + p2[i][j]; // Access array elements properly
        }
    }
}

int main()
{
    int arr1[2][2] = {
        {1, 2},
        {5, 6}};
    int arr2[2][2] = {
        {13, 14},
        {17, 18}};

    int arr3[2][2];

    show(arr1, arr2, arr3, 2, 2);

    // Print the result
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
