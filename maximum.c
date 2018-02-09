#include<stdio.h>
int main()
{
int a[20],i,c;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
c=a[0];
for(i=0;i<10;i++)
{
if(c<a[i])
{
c=a[i];
}
}
printf("%d",c);
}
