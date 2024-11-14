#include <stdio.h>

int main(){

    int my_Array[5]={1,2,3,4,5},i;
    for(i=0;i<5;i++){
        printf("Value of a[%d]=%d\t" , i, my_Array[i]);
        printf("Address of a[%d]=%lu\n", i, (unsigned long)&my_Array[i]);



        printf("Value of a[%d]=%d\t", i, *(my_Array + i));
        printf("Address of a[%d]=%lu\n", i, (unsigned long)&my_Array+i);
    }
    return 0;

}