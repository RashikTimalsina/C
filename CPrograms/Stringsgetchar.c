#include <stdio.h>

int main(){

    char name[50],ch;

    int i=0;
    printf("Enter your string: ");

    while(((ch=getchar())  !='\n'))
    {

        name[i]=ch;
        i++;


    }

    name[i]=''

}