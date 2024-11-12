
// Sort the arry in ascending order
#include <stdio.h>

int main()
{

    int num[] = {10, 9, 2, 15, 6, 3, 11};

    int i, j, temp;

    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 7; j++)         //10=temp, 9=num[i], 10=num[j]
        {
            if (num[i] > num[j])
            {           
                temp = num[i];                  
                num[i] = num[j];                
                num[j] = temp;                  1
            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}