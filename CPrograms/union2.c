#include <stdio.h>
int main(){
    union myArray{
        int x;
        char y;
        char z[20];
    }arr[3];
    

printf("\n Enter the value first");
scanf("%d", &arr[0].x);

printf("\n Enter value second:");
scanf(" %c", &arr[1].y);

printf("\n Enter value second:");
scanf(" %c", &arr[2].z);

}