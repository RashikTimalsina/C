// function pass by reference

//to call an array it is alwasy passed by reference


#include <stdio.h>

void swap(int *x, int *y);

int main()
{

    int num1, num2;
    printf("\nEnter 2 no:\n");
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);
    printf(" num1=%d \tnum2=%d", num1, num2);

    return 0;
}

void swap(int *x, int *y)
{

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}