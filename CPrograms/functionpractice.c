#include <stdio.h>

void demoFunction(int length, int breadth){
    int area=length*breadth;
    printf("The area of the rectangle is : %d \n",area);
}

int addNums(int num1, int num2){
    int sum=num1+num2;
    return sum;
}

int main(){

    demoFunction(7,6);

        int result=addNums(4,5);
        printf("Result = %d \n",result);


    return 0;
}