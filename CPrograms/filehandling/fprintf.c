// fprintf and fscanf
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[50];
    int age;
    float grade;


    file = fopen("myfile.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file: \n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);
    fprintf(file, "Name: %s\n", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(file, "Age: %d\n", age);

    printf("Enter your grade: ");
    scanf("%f", &grade);
    fprintf(file, "Grade: %.2f\n", grade);

    file = fopen("myfile.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file: \n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);
    fprintf(file, "Name: %s\n", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(file, "Age: %d\n", age);

    printf("Enter your grade: ");
    scanf("%f", &grade);
    fprintf(file, "Grade: %.2f\n", grade);

    fclose(file);

    return 0;
}