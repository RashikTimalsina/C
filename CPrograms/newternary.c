// wap to find greatest number among 3 using ternary operator

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The greatest number is: %d", max);
    return 0;
}