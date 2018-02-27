#include<stdio.h>
void main()
{
    int n,i,floag=0;
     printf("enrte the number :");
     scanf("%d",&n);
     for(i=2;i<n/2;i++)
     {
         if(n%i==0)
         {
             floag=1;
             break;
             
         }
     }
     if(floag==1)
     {
         printf("yes");
     }
         else
         {
             printf("no");
         }
     
}
