//WAP tpo store information of student using structure. Store the name, age, rollno, address and marks of 5 subjects of that student.

#include <stdio.h>

int main(){

    struct student{
        char name[30];
        int roll_no;
        int age;
        char address[30];
        int marks[5];

    }stud;

    printf("Enter the student details: \n");

    printf("Enter the name of the student : ");
    fgets(stud.name,30,stdin);

    printf("Enter the roll no: of the student : ");
    scanf("%d",&stud.roll_no);

    printf("Enter the age of the student : ");
    scanf("%d",&stud.age);

    while (getchar() != '\n');
        
    printf("Enter the address of the student : ");
    fgets(stud.address,30,stdin);

    printf("Enter the marks of the student : \n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &stud.marks[i]);
    }

    printf("The student details are: \n");
    printf("Name: %s\n", stud.name);
    printf("Roll No: %d\n", stud.roll_no);
    printf("Age: %d\n", stud.age);
    printf("Address: %s\n", stud.address);

    printf("Marks:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", stud.marks[i]);
    }

        return 0;
}
