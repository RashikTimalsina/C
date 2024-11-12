// Take a float array of size 7 from user and print the sum using functions

#include <stdio.h>

float sum(float arr[], int n);

int main()
{
    float arr[7];
    int i;
    printf("Enter 7 numbers: ");
    for (i = 0; i < 7; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("Sum = %.2f", sum(arr, 7));
    return 0;
}

float sum(float arr[], int n)
{
    int i;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}