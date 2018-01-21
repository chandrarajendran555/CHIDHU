#include <stdio.h>

int main()
{
 int n,h,min;
 printf("enter the minuts");
 scanf("%d",&n);
 if(n<60)
 {
     printf("%d",n);
 }
 if(n>60)
 {
     h=n/60;
     min=n%60;
     printf("%d.%d",h,min);
     
 }
 
    return 0;
}
