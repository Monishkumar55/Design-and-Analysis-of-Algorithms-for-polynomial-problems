#include<stdio.h>
int fib(int n)
{
	if(n<=2)
	{
		return 1;
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("0 1 ");
	for(int i=2;i<n;i++)
	{
		printf("%d ",fib(i));
	}
}
