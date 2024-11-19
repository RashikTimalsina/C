#include <stdio.h>

int main(){

    int ch;
    FILE *fp;
    fp=fopen("myfile.txt","a");

    if(fp==NULL){
        printf("Error opening file: \n");
        return 1;
    }

    printf("Press Ctrl +Z in DOS and Ctrl +D\n in Linux to stop reading more characters \n\n");

    printf("Enter text");

    while ((ch=getchar())!=EOF)
    {
        /* code */
        fputc(ch,fp);
    }

    fclose(fp);

    return 0;
}