//WAP to store student name, roll number and address(district,zone) in a structure. Here address is different structure. Using the concept of nested structure.

#include <stdio.h>
#include <string.h>

int main(){

    struct student
    {

        char name[30];
        int roll_no;

        struct 
        {

            char district[30];
            char zone[30];

        // } addr;
        }address;                     //variable declaration can be done at last too

    } s1;

    printf("Enter the name of the student:- ");
    fgets(s1.name, 30, stdin);
    printf("Enter the roll number of the student:- ");
    scanf("%d", &s1.roll_no);

    
    
    while (getchar() != '\n');

    printf("Enter the district of the student:- ");
    fgets(s1.address.district, 20, stdin);
    printf("Enter the zone of the student:- ");
    fgets(s1.address.zone, 20, stdin);



    printf("Details of the student:-");
    printf("\nName: %s", s1.name);
    printf("\nRoll Number: %d", s1.roll_no);
    printf("\nDistrict: %s", s1.address.district);
    printf("\nZone: %s", s1.address.zone);

    return 0;
}

