#include <stdio.h>
int main()
{

    int num1, num2, num3, max;

    printf("Enter the three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2) ? (num1 > num3) ? num1 : num3 : (num2 > num3) ? num2
                                                                      : num3;
    printf("Largest number is: %d", max);

    return 0;
}