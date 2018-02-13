#include <stdio.h>

int main(void)

{

	char c[10];

	scanf("%s",c);



	int i,flag=0,m;

	m=strlen(c);

	for(i=0;i<m;i++)

	{

		if(c[i]=='1' || c[i]=='0')

		{

			flag=1;

		}

		else

		{

			flag=0;

			break;

		}

		

	}

	if(flag==1)

	{

		printf("yes");

	}

	

}
