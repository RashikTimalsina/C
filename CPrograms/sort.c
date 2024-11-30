// Sort one dimensional array using funcions

#include <stdio.h>

//Function declaration
void sort(int arr[], int n);

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];             //Array declaration
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);               //Function call
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void sort(int arr[], int n)                 //arr[] is the array and n is the number of elements
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
