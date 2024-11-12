#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0; // Base case: the 0th Fibonacci number is 0
    else if (n == 1)
        return 1; // Base case: the 1st Fibonacci number is 1
    else
        return (fibonacci(n - 1) + fibonacci(n - 2)); // Recursive case
}

int main()
{
    int n, i;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    printf("First %d terms of Fibonacci series are:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}
