#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("mytestfile.txt", "w");
    fprintf(fp, "%d %d %d\n", 100, 200, 500);
    fclose(fp);
    return 0;
}