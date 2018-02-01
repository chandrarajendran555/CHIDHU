#include <stdio.h>
void main()
{
    char str;
    int lines, j;
    lines =j = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[j]!='\0')
    {
        if((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[jj<='Z'))
        {
            lines++;
        }
        j++;
    }
