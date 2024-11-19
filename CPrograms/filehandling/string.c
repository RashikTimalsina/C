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

    printf("Press Ctrl +Z in DOS and Ctrl +D\n in Linux to stop reading more characters \n\n");

    while (fgets(str, 50, fp)!= EOF)
    {

        printf("%s", str);

    }

    fclose(fp);

    return 0;
}