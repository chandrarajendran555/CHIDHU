include<stdio.h>
int main()
{
	int i,j,n,tem;
	int a[100];
	scanf("%d",&n);
	printf("enter the array value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
		{
                         if(a[i]>a[j])
                         {
		tem=a[j];
		a[j]=a[i];
		a[i]=tem;
		}
		}
		}
		printf("the highest value is%d\t \nthe lowest value is%d\t",a[n-1],a[0]);
		return 0;

}
