// wap to find reverse of a number
#include <stdio.h>
int main()
{
    int num, reverse = 0;
    int remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;                   // 12345 % 10 = 5
        reverse = reverse * 10 + remainder;       // 0 * 10 + 5 = 5
        num = num / 10;                         // 12345 / 10 = 1234.5
    }
    printf("Reverse of the number is: %d\n", reverse);
    return 0;
}