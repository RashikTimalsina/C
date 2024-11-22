//Use the append + mode to open the file in read and write mode.
//Use the file rewind to go to start of the file
//use the file seek to traverse the contents of file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("myfile.txt", "a+");

    if (fp == NULL)
    {
        printf("Error opening file: \n");
        exit(1);
    }

    printf("Press Ctrl +Z in DOS and Ctrl +D\n in Linux to stop reading more characters \n\n");

    printf("Enter text");

    while ((ch = fgetc(fp)) != EOF)
    {
        /* code */
        printf("%c", ch);
    }

    rewind(fp);

    printf("\n\nEnter text to append to the file: \n\n");

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);

    return 0;
}