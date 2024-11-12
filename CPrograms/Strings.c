#include <stdio.h>

int main(){


    char name[25];
    printf("Enter your name : ");
    scanf("%[^\n]",&name);
        
    printf("Your name is :%s" ,name);

return 0;
    }