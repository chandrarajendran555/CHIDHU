#include<stdio.h>
void main()
{
int i,j,n;
printf("enter the number");
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
a[i]=a[j];
a[j]=t;
}
}
}
if(n%2==0)
{
printf("%d",(a[n/2]+(a[n/2]-1))/2);
}
else
{
printf("%d",a[n]/2);
}
}
