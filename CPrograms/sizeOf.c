#include <stdio.h>
int main(){

    int num;
    printf("Integer size is: %zu bytes\n",sizeof(num));
    printf("double size is: %zu bytes\n",sizeof(59.46));
    printf("char size is: %zu bytes\n",sizeof('x')); 
    printf("float size is: %zu bytes\n",sizeof(20.3f));



    return 0;
}