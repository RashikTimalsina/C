// WAP to print the array of maximum size 50 asking user the size of array and printing the maximum and minimum value of the array

#include <stdio.h>
#define SIZE 50

int main(){

    int num[SIZE], size, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)          // Loop to take input from the user
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for (int i = 0; i < size; i++)          // Loop to find the maximum and minimum value of the array
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("Maximum value of the array is: %d\n", max);
    printf("Minimum value of the array is: %d\n", min);

    return 0;


}
