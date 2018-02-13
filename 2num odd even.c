#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number a and b:" );
    
    scanf("%d%d",&a,&b);
    if((a%2==0)&&(b%2==0))
    {
        printf("even");
        
    }
    else
    {
        printf("odd");
    }
}
