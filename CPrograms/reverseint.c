#include <stdio.h>
int main(){

    //five digits positive integer numbers lai reverse garna

    int num,n,digit1,digit2,digit3,digit4;

    printf("Enter the five digit positive integer : ");
    scanf("%d",&num);               //12345

    n=num;                           //12345
    
    digit1=n % 10;                     //12345 % 10 = 5
    n=n/10;                             //12345 / 10 = 1234.5
   
    digit2 = n % 10;                    //1234.5 % 10 = 4
    n = n / 10;                         //1234.5 / 10 = 123.45

    digit3 = n % 10;                    // 123.45 % 10 = 3
    n = n / 10;                         // 123.45 / 10 = 12.345

    digit4 = n % 10;                    // 12.345 % 10 = 2
    n = n / 10;                         // 12.345 / 10 = 1.2345

    

    printf("Reverse of the number is : %d%d%d%d%d ", digit1,digit2,digit3,digit4,n);

    //After doing reverse also finding the sum of the digits are: 
    int sum=n+digit1+digit2+digit3+digit4;
    printf("\nSum of the digits is: %d",sum);

    return 0;
}