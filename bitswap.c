#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number a&b :");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("the swap number :a=%d\tb=%d",a,b);
    
}
