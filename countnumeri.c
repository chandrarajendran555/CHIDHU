#include<stdio.h>
#include<string.h>
int main()
{
char q[100];
int i,cou=0,n;
printf("enter the character :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%c",q[i]);
}
for(i=0;q[i]!='\0';i++)
{
if(q[i]=='1' ||q[i]=='2' || q[i]=='3' || q[i]=='4' || q[i]=='5' ||q[i]=='6' ||q[i]=='7' ||q[i]=='8' || q[i]=='9')
cou++;
}
printf("%d",cou);
return 0;
}
