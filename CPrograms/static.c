#include <stdio.h>

int main()
{

    int i;
    for (i = 1; i <= 3; i++)
        stats();
}

void stats()
{
    static int x = 0;
    x = x + 1;  
    printf("x=%d\n", x);
}
