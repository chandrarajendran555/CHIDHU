#include<stdio.h>
void main()
{
    int a,b,j,i,floag=0,count=0;
    printf("enter the value a and b:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        
    for(j=2;j<=(a/2);j++)
    {
        if((a%j)==0)
        {
            floag=1;
        }
        else
        {
            floag=0;
        }
    }
    
    }
    
    if(floag==0)
    {
        count++;
    
    }
    printf("%d",count);
}
