#include <stdio.h>
#include <math.h>
int main(){

    float num, sqr;

    printf("Enter the number : ");
    scanf("%f",&num);

    sqr=sqrt(num);

    printf("Square root of a %.2f is : %.2f" ,num,sqr);

return 0;

}