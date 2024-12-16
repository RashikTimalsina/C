//WAP to sort n numbers in ascending order using DMA 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));          //Using malloc function

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(*(arr + i) > *(arr + j)){
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }

    free(arr);
    return 0;
}