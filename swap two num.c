#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enterb the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("the swap value:%d%d",a,b);
}
