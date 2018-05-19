#include<stdio.h>
void main()
{
    int i,k,n,a[i];
    printf("enter the numbe:");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            if(a[i]%2!=0)
            {
                printf("%d",a[i]);
            }
            
        }
    }
}
   
