#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    FILE *fp;

    fp = fopen("myfile.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file: \n");
        exit(1);
    }

    printf("your text: \n\n");

    while (fgets(str, 50, stdin) != NULL)
    {

        fputs(str,fp);

    }

    fclose(fp);

    return 0;
}