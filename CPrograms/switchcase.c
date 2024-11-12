#include <stdio.h>
int main()
{
    int num1, num2, res,oper;
    
    printf("Enter the  first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter the operation by number:");
    scanf(" %d", &oper);
    switch (oper)
    {
    case 1:
        res = num1 + num2;
        printf("The addition of %d and %d is %d.", num1, num2, res);
        break;
    case 2:
        res = num1 - num2;
        printf("The subtraction of %d and %d is %d.", num1, num2, res);
        break;
    case 3:
        res = num1 * num2;
        printf("The multiplication of %d and %d is %d.", num1, num2, res);
        break;
    case 4:
        res = num1 / num2;
        printf("The division of %d and %d is %d.", num1, num2, res);
        break;
    case 5:
        res = num1 % num2;
        printf("The remainder of %d and %d is %d.", num1, num2, res);
        break;
    default:
        printf("The input is invalid!");
    }
    return 0;
}