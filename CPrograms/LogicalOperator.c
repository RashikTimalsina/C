#include <stdio.h>
int main()
{

    int a = 4, b = 5;
    // bitwise && operator
    // result= a & b;

    // bitwise || operator
    // result= a | b;

    //bitwise XOR
    // result= a ^ b;

    //bitwise NOT
    //result= ~a;

    //bitwise shift left
    //result= a<<1;

    //bitwise shift right
    //result= a>>1;

    //ternary operator
    //result= a>b ? a:b;

    //

    int result1 = a & b;
    int result2=a | b;
    int result3=a ^ b;
    int result4=~a;
    int result5=a<<1;
    int result6=a>>1;
    int result7=a>b ? a:b;

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);
    printf("%d\n", result5);
    printf("%d\n", result6);
    printf("%d\n", result7);



    return 0;
}
