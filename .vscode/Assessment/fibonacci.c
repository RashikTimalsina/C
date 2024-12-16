//WAP to print fibonacci series for the number of terms entered by user

#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n, i;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    printf("First %d terms of Fibonacci series are:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("%d\n", fibonacci(i));              //Function call
    }

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));        //Recursive call
}
