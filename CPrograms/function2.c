#include <stdio.h>

void add(int,int);
int main(){

        int x,y;
        printf("Enter 2 numbers \n");
        scanf("%d %d",&x,&y);

        add(x,y);

        printf("\nx=%d\ty=%d",x,y);

    return 0;
}

void add(int x,int y){

    x=x+1;y=y+1;
        printf("sum=%d",x+y);

}