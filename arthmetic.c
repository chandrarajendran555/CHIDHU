#include<stdio.h>
void main()
{
int f,d,n,i,value,sum=0;
printf("enter the  number of terms");
scanf("%d",&n);
printf("enter the first term and commandifferent");
scanf("%d%d",&f,&d);
value=f;
for(i=0;i<n;i++)
{
 sum=sum+value;
 value=value+d;
}
printf("%d",sum);
}
