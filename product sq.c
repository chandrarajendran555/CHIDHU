#include<stdio.h>
void main()
{
    int a,b,i,c;
    int d[10],j,floag=0;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=1;i<c/2;i++)
    {
    if((i*i)==c)
    {
        floag=1;
        
        
    }
    }
    
    if(floag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
