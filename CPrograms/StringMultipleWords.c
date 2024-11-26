#include <stdio.h>
int main(){

    char name[25];
    printf("Enter your name : ");
    scanf("%[^\n]",name);          //%[^\n] is used to take multiple words with spaces
        
    printf("Your name is :%s" ,name);

    return 0;
}