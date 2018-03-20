#include <stdio.h>
#include<math.h>
int main()
{
    int a[20],i=0,min,tem;
printf("enter array elements:");

  for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<10;i++)
{
if(a[i]<min)
{
tem=a[i];
a[i]=min;
min=tem;
}
}
printf(" %d",min);

    return 0;
}

