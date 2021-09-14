#include<stdio.h>
int main()
{
    int a,b ;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
void swap(int *x,int *y)
{
    int z;
    z=*y;
    *y=*x;
    *x=z;
}