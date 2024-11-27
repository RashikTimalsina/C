#include <stdio.h>

int factorial(int n);                       // Function prototype declaration

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The factorial of %d is %d\n",num,factorial(num));           // Function call

    return 0;
}


int factorial(int n){                           // Function definition
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);                // Recursive function
    }
}