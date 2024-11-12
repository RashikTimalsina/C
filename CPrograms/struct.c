//WAP to store student name, roll number and address(district,zone) in a structure. Here address is different structure. Using the concept of nested structure.

#include <stdio.h>
#include <string.h>

int main(){

    struct student
    {

        char name[30];
        int roll_no;

        struct address
        {

            char district[30];
            char zone[30];

        } addr;

    } s1;

    printf("Enter the name of the student:- ");
    fgets(s1.name, 30, stdin);
    printf("Enter the roll number of the student:- ");
    scanf("%d", &s1.roll_no);

    while (getchar() != '\n');

    printf("Enter the district of the student:- ");
    fgets(s1.addr.district, 20, stdin);
    printf("Enter the zone of the student:- ");
    fgets(s1.addr.zone, 20, stdin);



    printf("Details of the student:-");
    printf("\nName: %s", s1.name);
    printf("\nRoll Number: %d", s1.roll_no);
    printf("\nDistrict: %s", s1.addr.district);
    printf("\nZone: %s", s1.addr.zone);

    return 0;
}

