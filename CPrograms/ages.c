#include <stdio.h>

int main()
{
    int ages[10];
    int largest, second_largest;

    // Input ages of 30 employees
    printf("Enter the ages of 30 employees:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Age of employee %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    // Initialize largest and second_largest
    largest = second_largest = -1; // Assuming ages are positive integers

    // Find largest and second largest
    for (int i = 0; i < 10; i++)
    {
        if (ages[i] > largest)
        {
            second_largest = largest;
            largest = ages[i];
        }
        else if (ages[i] > second_largest && ages[i] < largest)
        {
            second_largest = ages[i];
        }
    }

    // Display the result
    if (second_largest == -1)
    {
        printf("No second largest age found (all employees have the same age).\n");
    }
    else
    {
        printf("The second largest age is: %d\n", second_largest);
    }

    return 0;
}
