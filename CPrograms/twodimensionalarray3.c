// WAP to take input in tw0 3x4 matrix multiply it, store the value in third matrix & display it.

#include <stdio.h>  
int main(){

    int arr1[3][4], arr2[3][4], arr3[3][4];
    int i, j, k;
    printf("Enter the elements of 1st matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("The 1st matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of 2nd matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The 2nd matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            arr3[i][j] = 0;
            for (k = 0; k < 4; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("The 3rd matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;


}


//what is presentation? Discuss the skills of oral presentation
//