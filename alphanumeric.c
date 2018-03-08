#include<stdio.h>
void main()
{
    char a[100];
    int n,i;
    printf("enter the string");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            printf("%c",a[i]);
            
        }
    }
}
