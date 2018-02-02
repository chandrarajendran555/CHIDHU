#include <stdio.h>

void main()
{
   int n,d;
   char c[100],b[100];
   printf("enter the string:");
   scanf("%s%s",&c,&b);
   n=strlen(c);
   d=strlen(b);
   if(n>=d)
   {
       printf("%s",c);
      
   }
   else
   {
      
   printf("%s",b);
}
}

