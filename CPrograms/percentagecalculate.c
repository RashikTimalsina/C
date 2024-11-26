#include   <stdio.h>
int main(){

    float  m1, m2, m3, m4, m5, total, percentage;
    char grade;

    printf("Enter the marks of 5 subjects: \n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    printf("Total marks: %.2f\n", total);

    percentage = (total / 500 ) *100;              //total marks is 500 for 5 subjects

    if(percentage >= 80)
        grade='A';

    else if(percentage >= 70)
        grade='B';

    else if(percentage >= 60)
        grade='C';

    else if(percentage >= 50)
        grade='D';

    else
        grade='F'; 
   
    printf("Percentage: %.2f\n", percentage);

    return 0;
}