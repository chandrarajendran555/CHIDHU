#include<stdio.h>
void main()
{
int n,num;
printf("enter the value");
scanf("%d",&num);
n=num+1;
while(n!=0)
{
if(n%10==0)
{
printf("%d",n);
}
n++;
}
}
