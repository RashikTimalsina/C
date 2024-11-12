#include <stdio.h>
int main()
{
    int num1, num2, res;
    char oper;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter the operator:");
    scanf(" %c", &oper);
    switch (oper)
    {
    case '+':
        res = num1 + num2;
        printf("The addition of %d and %d is %d.", num1, num2, res);
        break;
    case '-':
        res = num1 - num2;
        printf("The subtraction of %d and %d is %d.", num1, num2, res);
        break;
    case '*':
        res = num1 * num2;
        printf("The multiplication of %d and %d is %d.", num1, num2, res);
        break;
    case '/':
        res = num1 / num2;
        printf("The division of %d and %d is %d.", num1, num2, res);
        break;
    case '%':
        res = num1 % num2;
        printf("The remainder of %d and %d is %d.", num1, num2, res);
        break;
    default:
        printf("The input is invalid!");
    }
    return 0;
}
