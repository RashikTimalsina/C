#include <stdio.h>
int main(){

    int a=1,b=2,c=3,d=4;

    int exp1=a * b / c;
    int exp2=a * b % c + 1;
    int exp3=++a *b - c++;
    int exp4=7 - -b * ++d;

    printf("FirstValue%d\n", exp1);
    printf("SecondValue%d\n", exp2);
    printf("ThirdValue%d\n", exp3);
    printf("FourthValue%d\n", exp4);

    return 0;

    // 

}