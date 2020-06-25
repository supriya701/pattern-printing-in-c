#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter a no ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				printf("*");
		}
		printf("\n");
		
	}
	for(i=1;i<=n;i++)
	{
	for(j=n;j>=i;j--)
	{
	printf("*");	
	}
	printf("\n");
}
}

