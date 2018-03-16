#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l,n,i;
    printf("enter the string:");
    scanf("%s",s);
    printf("enter the number:");
    scanf("%d",&n);
    l=strlen(s);
    for(i=0;i<n;i++)
    {
        printf("%c",s[l-1]);
        l--;
        
    }
    
}
