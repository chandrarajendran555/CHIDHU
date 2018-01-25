 #include<stdio.h>
       #include<conio.h>

       void main()
       {

              char st[50];
              int i,count=0;
              clrscr();

              printf("\nEnter any string : ");
              gets(st);
              
              for(i=0;st[i];i++)
                     if(st[i] == ' ')
                           count++;
              
              printf("\nTotal blank spaces : %d",count);

              getch();
    }

