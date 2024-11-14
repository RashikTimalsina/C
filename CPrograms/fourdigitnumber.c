//WAP to read four digit no & print the sum of each digit.

#include <stdio.h>

int main(){


    int num, originalNum, remainder, sum = 0;

    printf("Enter a four digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while(originalNum != 0){
        remainder = originalNum % 10;
        sum += remainder;
        originalNum /= 10;
    }

    printf("The sum of the digits of %d is %d.\n", num, sum);

    return 0;

}