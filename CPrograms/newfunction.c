#include <stdio.h>

int add(int x,int y);               // Function prototype declaration

int add(int x,int y){               // Function definition
    int sum=x+y;
    return sum;
}

int main(){                         // Calling the Main function

    int a=10,b=20;
    int main_sum=add(a,b);
    printf("The sum of %d and %d is %d\n",a,b,main_sum);

    return 0;
}