#include <stdio.h>

int main(){
    union myarray{
        int a;
        char b;
        char c[20];


    }arr1;

    arr1.a=100;
    printf("\na=%d",arr1.a);
    printf("\nb=%c",arr1.b);

    //printf("\nc=%s",arr1.c);
    return 0;
}