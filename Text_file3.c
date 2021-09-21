#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE *fptr;
	struct student {
		char name[20];
		char ID[9];
		int age;	} s;
	fptr = fopen("StRecord.txt", "w");
	printf("Name : "); scanf("%s",s.name); 
	printf("ID : ");   scanf("%s",s.ID);   
	printf("Age : ");  scanf("%d",&s.age); 
	fwrite(&s, sizeof(struct student), 1, fptr);
	fclose(fptr);
	return 0;
}