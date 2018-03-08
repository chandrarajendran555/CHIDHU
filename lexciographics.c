#include<stdio.h>
void main()
{
    char s[10],tem[10];
    int i,k,j,n;
    printf("enter the string");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            tem[k]=s[i];
            s[i]=s[j];
            s[j]=tem[k];
            
            
        }
    }
    printf("%s",s);
}
