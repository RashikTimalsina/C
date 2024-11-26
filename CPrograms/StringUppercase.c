#include <stdio.h>
int main(){
    char name[25];
    printf("Enter your name in uppercase: ");
    scanf("%[A-Z]",name);               //%[A-Z] is used to take only uppercase letters
        
    printf("Your name is :%s" ,name);

    return 0;
}