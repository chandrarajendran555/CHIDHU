#include<stdio.h>
void main()
{
    int a,b,sub,c;
    printf("enter the number a and b:");
    scanf("%d%d",&a,&b);
    sub=a-b;
    c=sub;
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
