//WAP to print the array of maximum size 50 asking user the size of array and sum of all elements of the array 


#include <stdio.h>
#define SIZE 50
int main(){

    int num[SIZE], size;
    int sum=0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", num[i]);
        sum+=num[i];
    }

    printf("\nSum of all elements of the array is: %d\n", sum);

    return 0;

}