#include <stdio.h>
#define PI 3.14
int main()
{
    float r1, r2, a1, a2, a;
    printf("Enter the radius of a small circle: ");
    scanf("%f",&r1);
    printf("Enter the radius of a big circle: ");
    scanf("%f", &r2);
    a1=PI * r1 * r1;                //area of small circle
    a2 = PI * r2 * r2;              //area of big circle
    a=a2 - a1;                      //area of concentric circle
    printf("Area of the concentric circle = %f",a);         

    return 0;
} 