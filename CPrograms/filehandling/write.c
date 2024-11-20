#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ch;
    FILE *fp;
    fp = fopen("myfile.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file: \n");
        exit(1);
    }

    printf("Enter text");

    while ((ch = getchar()) != EOF)
    {
        /* code */
        fputc(ch, fp);
    }

    fclose(fp);

    return 0;
}