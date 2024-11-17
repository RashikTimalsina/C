#include <stdio.h>
int main(){
    
struct student{

    char name[10];
    int roll_no;
    char address[10];

};

    struct student stud={"Rashik",12,"Kathmandu" };
    printf("\nname = %s", stud.name);
    printf("\nroll_no = %d", stud.roll_no);
    printf("\naddress = %s", stud.address);

    return 0;
}
    