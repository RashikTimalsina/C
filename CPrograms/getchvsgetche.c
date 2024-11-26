#include <stdio.h>
int main(){

    char ch1,ch2;

    printf("Enter the first character: ");
    ch1=getch();

    printf("\nEnter the second character: ");
    ch2=getche();

    printf("\nFirst character is ");
    putchar(ch1);
    printf("\nSecond character is: ");
    putchar(ch2);

    return 0;
}