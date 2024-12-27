//WAP to delete the contents of a file
#include <stdio.h>

int main(){

    FILE *fp;
    char ch;
    fp = fopen("file.txt", "w");   //open file in write mode
    if(fp == NULL){
        printf("File not found\n");  //if file not found
        return 1;
    }
    printf("Enter the contents of the file\n");
    while((ch = getchar()) != EOF){  //read contents from user
        fputc(ch, fp);
    }
    fclose(fp);
    printf("File contents are deleted\n");
    return 0;

    //Output: Enter the contents of the file
    //        Hello World
    //        File contents are deleted

    
}