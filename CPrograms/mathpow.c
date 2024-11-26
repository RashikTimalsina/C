#include <stdio.h>
#include <math.h>

int main(){

        //Power function takes two arguments i.e base value and exponential value
    float base_num, exp_num, power;
    printf("Enter two numbers :\n");
    scanf("%f %f",&base_num,&exp_num);

    power=pow(base_num,exp_num);
    printf("Power = %.2f",power);

    return 0;
}