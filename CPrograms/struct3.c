#include  <stdio.h>

int main(){

    struct address{
        char district[25];
        char zone[25];

    };

    struct student{
        char name[50];
        int rollno;
        int marks[5];
        struct address addr;
        

    };

    struct student stud1;
    printf("\n enter student details");

    printf("\nName:");
    scanf(" %[^\n]" ,stud1.name);


    printf("\nRollno:");
    scanf("%d",&stud1.rollno);

    printf("\nMarks:");
    
    for(int i=0;i<5;i++){
        scanf("%d",&stud1.marks[i]);
    }


    printf("\nDistrict:");
    scanf(" %[^\n]",stud1.addr.district);

    printf("\nZone:");
    scanf(" %[^\n]",stud1.addr.zone);

    printf("\nStudent details are:");

    printf("\nName:%s",stud1.name);
    printf("\nRollno:%d",stud1.rollno);
    printf("\nMarks:");
    for(int i=0;i<5;i++){
        printf("%d ",stud1.marks[i]);
    }


}