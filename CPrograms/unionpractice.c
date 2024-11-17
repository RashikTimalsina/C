#include <stdio.h>
int main(){

    union student {

        char name[10];      //size=1 byte
        int roll_no;        //size=2 bytes
        float gPA;          //size=4 bytes

    };

    union student stud;

    printf("Enter the name: \n");
    scanf("%s ", stud.name);

    // printf("Enter the rollno: \n");
    // scanf("%d ", stud.roll_no);

    // printf("Enter the gpa: \n");
    // scanf("%f ",stud.gPA);

    printf("Display details\n");

    printf("%s \n", stud.name);

    return 0;
}