#include<stdio.h>
void main()
{
    int n,a[10],k,i;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("enter the k value: ");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    
    while(i==k)
    {
     printf("%d",a[i]);  
     i++;
    }
    }
}
