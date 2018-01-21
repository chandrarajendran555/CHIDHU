#include <stdio.h>

int main()
{
  int a[10],j,n;
  printf("enter the number of element:");
  scanf("%d",&n);
  printf("enter the array value:");

 for(j=0;j<n;j++)
 {
     scanf("%d",&a[j]);
 }
 for(j=0;j<n;j++)
 {
 printf("%d\t%d\n",a[j],j);
 }
    return 0;
}



