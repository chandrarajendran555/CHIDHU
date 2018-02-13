#include<stdio.h>
void main()
{
    char a[10000];
    int count=0,i,m;
    printf("enter the word:");
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=' ')
        {
            count=count+1;
        }
    }
    printf("%d",count);
}
