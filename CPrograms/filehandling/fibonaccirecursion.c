#include <stdio.h>

// Function declaration (prototype)
int fibonacci(int n);

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i)); // Calling the recursive function
    }
    printf("\n");

    return 0;
}

// Function definition
int fibonacci(int n)
{
    if (n == 0) // Base case 1
        return 0;
    else if (n == 1) // Base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}
