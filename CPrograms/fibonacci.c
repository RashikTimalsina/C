// 6. Write a program in C to print Fibonacci series for the number of terms entered by the
// user

#include <stdio.h>

int main()
{
    int num, n1 = 1, n2 = 1, n3;

    printf("Enter the number upto where you want the fibonacci series:- ");
    scanf("%d", &num);

    printf("%d, %d, ", n1, n2);
    for (int i = 2; i < num; ++i)         // i = 2 because we have already printed 2 numbers
    {
        n3 = n1 + n2;           // n3 = 1 + 1 = 2
        printf("%d, ", n3);     // 2
        n1 = n2;                // n1 = 1
        n2 = n3;                // n2 = 2
        
        
    }

    return 0;
}