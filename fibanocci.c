#include<stdio.h>
void main()
{
    int f1=0,f2=1,c,i,nt;
    printf("enter the number:");
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
       
        nt=f1+f2;
        f1=f2;
        f2=nt;
         printf("%d,",f1);
        
    }
}
