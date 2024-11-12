#include <stdio.h>

int main(){

    float unit_price, quantity, total_price,dis1,dis2,dis3;
    unit_price = 10.0;
    dis1=0.05;
    dis2=0.1;
    dis3=0.15;
    quantity = 11;
    total_price = unit_price * quantity*(1.0-(quantity>50 ?  dis1 :(quantity>20 ? dis2:(quantity>10 ? dis3: 0.0))));
    printf("Total price is: %f\n", total_price);

    return 0;

}