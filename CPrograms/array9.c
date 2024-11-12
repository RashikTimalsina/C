// WAP to sort the array in ascending order taking size of array input from user and print the sorted array using bubble sort

#include <stdio.h>
#define SIZE 50
int main()
{

    int num[SIZE], size, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) // Loop to take input from the user
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < size; i++) // Loop to sort the array in ascending order
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for (int i = 0; i < size; i++) // Loop to print the sorted array
    {
        printf("%d ", num[i]);
    }

    return 0;
}