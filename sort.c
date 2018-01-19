#include <stdio.h>

void main()
{
 int a[10];
 int i,j,n,t;
 printf("enter the number \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
t=a[i];
a[j]=a[i];
a[j]=t;
}
}
for(i=0;i<n;i++
{
  printf("%d\t",a[i]);
  }
}



