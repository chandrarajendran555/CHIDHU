#include<stdio.h>
void main()
{
    int n,k,c=1,i;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        c=c*n;
    }
    printf("%d",c);
   
    }
