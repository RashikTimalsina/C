//WAP to print the patterns as per user's prompt

#include <stdio.h>
int main(){

    int num_row,num_col;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d",&num_row);

    printf("Enter the number of columns: ");
    scanf("%d", &num_col);

    printf("Enter the character symbol: ");
    scanf(" %c", &symbol);

    for(int i=1;i<=num_row;i++){


            for(int j=1;j<=num_col;j++){

                printf("%c" ,symbol);

            }

            printf("\n");
    }

    return 0;
}