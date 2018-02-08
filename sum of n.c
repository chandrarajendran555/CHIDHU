#include<stdio.h>

void main()
{
    int a[100],i,c,sum=0;
    printf("eneter the number: ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("the sum of number is:%d",sum);

}
