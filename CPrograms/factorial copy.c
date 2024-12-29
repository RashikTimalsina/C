//WAP that reads a number from the user and calculates the factorial of that number.

#include <stdio.h>
int main(){

    int num;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1;i<=num;i++){
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;

}