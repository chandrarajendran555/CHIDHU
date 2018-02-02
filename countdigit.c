#include <stdio.h>

void main()
{
   int n,count=0;
   printf("enter the number:\n");
   scanf("%d",&n);
  

   while(n!=0)
   {
       count++;
      n= n/10;
       
   }
   
  
       printf("\nNumber of numeric digit:%d",count);
   
}



