#include<stdio.h>
void main()
{
  int p,t,r,fl;
  printf("enter the principleamount,time and rate:");
  scanf("%d%d%d",&p,&t,&r);
  fl=(p*t*r)/100;
  printf("%d",fl);
}
