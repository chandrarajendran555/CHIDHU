#include<stdio.h>
void main()
{
    int i,n,sum=0,a[10];
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
       
        
    }
     printf("sum:%d",sum);
}
