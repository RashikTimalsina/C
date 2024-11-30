//Find the number entereed by user is prime or not using functions
#include <stdio.h>

int prime(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n))
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}
int prime(int n)
{
    int i;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;               //return 0 if number is not prime
        }
    }
    return 1;                   //return 1 if number is prime
}


