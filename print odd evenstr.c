#include<stdio.h>
void main()
{
    char a[10],b[10],c[10];
    int l,i;
    printf("enter the string:");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((i%2)==0)
        {
            printf("%c",a[i]);
        }
    }
    printf(" ");
    
    for(i=0;i<l;i++)
    {
        if((i%2)==1)
        {
            printf("%c",a[i]);
        }
    }
}
