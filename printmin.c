
#include<stdio.h>
void main()
{
int a,b,c;
printf(" enter the a value\n");
scanf("%d",&a);
printf("enter the b value\n");
scanf("%d",&b);
printf("enter the  c value\n");
scanf("%d",&c);
if((a<b)||(a<c))
{
printf("%d",a);
}
else if((b<c)||(b<a))
{
printf("%d",b);
}
else
{
printf("%d",c);
}
}
