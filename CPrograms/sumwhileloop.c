#include <stdio.h>
int main(){

    int sum=0;
    int i;
    while(i<=5){
        sum+=i;
        i++;
    }

    printf("Sum of first 100 natural numbers is: %d", sum);
    

    return 0;
}