#include <stdio.h>

int main()
{
   char str[1000], c;
   int i, n = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character : ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++n;
   }

   printf("Frequency of %c = %d", c, n);

   return 0;
}




