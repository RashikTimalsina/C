
#include <stdio.h>

struct person{

        int ptype;
        char name[50];
        char address[10];
        char moblile[10];

        union{
            struct{
                char specialization[25];

            }teacher;

            struct{
                char course[25];

            }student;
        }per;

};

int main(){

    struct person p1;

    printf("\n Enter the type of person(1 for teacher, 2 for student):");
    scanf("%d", &p1.ptype);

    if(p1.ptype == 1){
        printf("\n Enter the name of the teacher:");
        scanf(" %[^\n]", p1.name);

        printf("\n Enter the address of the teacher:");
        scanf(" %[^\n]", p1.address);

        printf("\n Enter the mobile number of the teacher:");
        scanf(" %[^\n]", p1.moblile);

        printf("\n Enter the specialization of the teacher:");
        scanf(" %[^\n]", p1.per.teacher.specialization);

        printf("\n Details of the teacher are:");
        printf("\n Name:%s", p1.name);
        printf("\n Address:%s", p1.address);
        printf("\n Mobile:%s", p1.moblile);
        printf("\n Specialization:%s", p1.per.teacher.specialization);
    }

    else if(p1.ptype == 2){
        printf("\n Enter the name of the student:");
        scanf(" %[^\n]", p1.name);

        printf("\n Enter the address of the student:");
        scanf(" %[^\n]", p1.address);

        printf("\n Enter the mobile number of the student:");
        scanf(" %[^\n]", p1.moblile);

        printf("\n Enter the course of the student:");
        scanf(" %[^\n]", p1.per.student.course);

        printf("\n Details of the student are:");
        printf("\n Name:%s", p1.name);
        printf("\n Address:%s", p1.address);
        printf("\n Mobile:%s", p1.moblile);
        printf("\n Course:%s", p1.per.student.course);
    }

    return 0;



}