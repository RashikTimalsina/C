#include <stdio.h>


int main(){

    int a=10;
    int b=20;
    int temporary;

    printf("Before Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    temporary=a;
    a=b;
    b=temporary;

    printf("After Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;


}