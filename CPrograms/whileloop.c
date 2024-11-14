//WAP to find print all odd and even numbers from 1 to 100 using while loop.
#include <stdio.h>
int main(){

    int i=1;
    while(i<=100){
        if(i%2!=0){
            printf("Odd: %d\n",i);     //This will print odd numbers from 1 to 100.
        }
        i++;

        if(i%2==0){
            printf("Even: %d\n",i);   //This will print even numbers from 2 to 100.
        }


    }

}