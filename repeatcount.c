#include<stdio.h>
void main()
{ 
    int n,k,i,a[10],count=1;

    printf("enter the number");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==k)
        {
            
            count++;
            
        }
    }
    
   
        printf("%d",count);
    
   

    
}
