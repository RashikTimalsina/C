#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    int roll;
};

void printStructure(struct Student *ptr)
{
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Roll: %d\n", ptr->roll);
}

int main()
{
    struct Student person1;
    struct Student *ptr = &person1;

    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter age: ");
    scanf("%d", &ptr->age);
    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    // Displaying the values using the pointer
    printf("\nStudent Information:\n");
    printStructure(&person1);

    return 0;
}
