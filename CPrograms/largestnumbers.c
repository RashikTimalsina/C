
#include <stdio.h>

int main(){
    int num1,num2,num3,num4,largest;
    printf("Enter the four numbers: \n");
    scanf("%d  %d  %d  %d",&num1,&num2,&num3,&num4);

    //Using ternary operator

     largest=(num1>num2)?(num1>num3)?(num1>num4)?num1:num4 : (num3>num4)?num3:num4 : (num2>num3)?(num2>num4)?num2:num4 :
                (num3>num4)?num3:num4;


    //Using if else

    // if(num1>num2 && num1>num3 && num1>num4){
    //     largest=num1;
    // }
    // else if(num2>num3 && num2>num4){
    //     largest=num2;
    // }
    // else if(num3>num4){
    //     largest=num3;
    // }
    // else{
    //     largest=num4;
    // }


    printf("Largest number is: %d",largest);


    return 0;
}