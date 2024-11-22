#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int roll;
    float marks;
};

int main()
{
    FILE *fp;

    fp = fopen("myfile.bin", "wb");
    if (fp == NULL)
    {
        printf("Error opening file: \n");
        exit(1);
    }

    struct student stud1 = {"Ram", 16, 89.89};
    fwrite(&stud1, sizeof(stud1), 1, fp);



    fclose(fp);

    return 0;
}