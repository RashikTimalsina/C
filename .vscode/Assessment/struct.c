#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
struct rectangle r;
int main()
{
printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &r.length, &r.breadth);
    return 0;
}