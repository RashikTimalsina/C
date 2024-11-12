//WAP to print the patterns of star from center to left and right

#include <stdio.h>

int main(){
    
    int i,j;
               //space
    for(i=1;i<=4;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");                //space
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
   
    }

   
    

    return 0;
}