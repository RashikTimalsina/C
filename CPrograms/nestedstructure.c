#include <stdio.h>

int main(){

    struct student{
        char name[50];
        int roll_no;


        struct address{
            char city[20];
            char district[20];
            char zone[20];


        }addr;

    }stud;

    printf("\nenter the name\n");
    scanf("%s", stud.name);
    printf("\nenter the address city of the student\n");
    scanf("%s", stud.addr.city);

    printf("Student details are :\n");
    printf("%s\n" ,stud.name);
    printf("%s\n", stud.addr.city);

    return 0;
}