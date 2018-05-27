#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
        fact=fact*i;
        }
        printf("%d",fact);
    }
}
