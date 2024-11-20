#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    FILE *fp;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file: \n");
        exit(1);
    }

    printf("your text: \n\n");

    while (fgets(str, 50, fp) != NULL)
    {

        puts(str);
    }

    fclose(fp);

    return 0;
}