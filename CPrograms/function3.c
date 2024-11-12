#include <stdio.h>

int add(int, int);
int main()
{

    int x, y,z;
    printf("Enter 2 numbers \n");
    scanf("%d %d", &x, &y);
        z=add(x,y);
    printf("\nx=%d\ty=%d", add(x,y));

    return 0;
}

int add(int x, int y)
{

    x = x + 1;
    y = y + 1;
return x+y;
}