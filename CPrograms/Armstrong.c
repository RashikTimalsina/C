//WAP to find the three digit Armstrong numbers

#include <stdio.h>
#include <math.h>

int main(){

    int num, originalNum, remainder, result = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while(originalNum != 0){
        remainder = originalNum % 10;               //153 % 10 = 3
        result += pow(remainder, 3);                //0 + 3^3 = 27
        originalNum /= 10;                          //153 / 10 = 15
    }

    if(result == num){
        printf("%d is an Armstrong number.\n", num);            //153 = 1^3 + 5^3 + 3^3
    }else{
        printf("%d is not an Armstrong number.\n", num);        //153 != 1^3 + 5^3 + 3^3
    }

    return 0;
}