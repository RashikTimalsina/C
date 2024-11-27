#include <stdio.h>

int largest(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(){

    int a,b,c,d,e,f;

    printf("Enter 4 numbers: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    d=largest(a,b);                 // d=largest(10,20)=20
    e=largest(d,c);                 // e=largest(20,30)=30
    f=largest(e,d);                 // f=largest(30,20)=30

    printf("The largest number is %d\n",f);



    return 0;
}