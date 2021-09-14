#include<stdio.h>
int main()
{
    int a,b ;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
void swap(int *a,int *b)
{
    int c;
    c=*b;
    *b=*a;
    *a=c;
}