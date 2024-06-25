#include<stdio.h>
int b(int n,int k)
{
	if(n==k||k==0)
	{
		return 1;
	}
	else if(n>k)
	{
		return(b(n-1,k-1)+b(n-1,k));
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,k,i,j;
	printf("Enter the n value:");
	scanf("%d",&n);
	printf("Enter the k value:");
	scanf("%d",&k);
	for(i=0;i<=n;i++)
	{
		printf("\n");
		for(j=0;j<=k;j++)
		{
			printf("%d ",b(i,j));
		}
	}
}

