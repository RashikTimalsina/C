// WAP to print the array elements from user using for loop
#include <stdio.h>

int main()
{

    int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }



    return 0;
}