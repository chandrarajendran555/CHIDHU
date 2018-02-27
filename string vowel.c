#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],n;
    int i,floag=0;
    printf("enter the string:");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
        {
            floag=1;
    
        }
    }
        if(floag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
