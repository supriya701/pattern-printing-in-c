#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter a no ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		printf("%d",i);
	    printf("\n");
}
}
