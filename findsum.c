#include<stdio.h>
void main()
{
    int i,j,k,n,a[100],p,b,count=0;
    scanf("%d,%d",&n,&p);
    for(i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
            b=a[i]+a[j]+a[k];
            if(b%p==0)
            {
                count=count+1;
            }
                
            }
        }
    }
    printf("%d",count);
    
}
