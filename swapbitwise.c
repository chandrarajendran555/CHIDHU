#include<stdio.h>
void main()
{
    int a,b;
    printf("enterb the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("the swap value:%d%d",a,b);
}
