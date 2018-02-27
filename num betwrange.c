#include<stdio.h>
void main()
{
    int n,l1,l2;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the rang of l1 and l2:");
    scanf("%d%d",&l1,&l2);
    if((n>l1)&&(n<l2))
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
}
