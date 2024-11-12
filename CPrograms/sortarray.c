#include <stdio.h>

int main(){

        int a[7]={3,6,7,5,9,8,2,4};
        SortArray(a);

    return 0;

}

void SortArray(int a[]){

    int i, j, temp;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}