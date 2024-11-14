//WAP to print the numbers from 201 to 300 using for, while and do-while loop.

#include <stdio.h>
int main(){

    //Using for loop
    for(int i=201;i<=300;i++){
        printf("%d\n",i);
    }

    printf("\n");

    //Using while loop
    int i=201;
    while(i<=300){
        printf("%d\n",i);
        i++;
    }

    printf("\n");

    //Using do-while loop
    int j=201;
    do{
        printf("%d\n",j);
        j++;
    }while(j<=300);

    return 0;

}