#include<stdio.h>
#define N 5
int subset[50];
int sum=0;
int ss(int set[],int ts,int tsum)
{
	if(tsum==0||ts<tsum)
	{
		printf("0");
	}
	for(int i=0;i<N;i++)
		{
			if(tsum>subset[i])
			{
				subset[i]==set[i];
			}
		}
		for(int i=0;i<N;i++)
		{
			printf("%d",subset[i]);
		}
}
int main()
{
	int ts=0,tsum,i;
  	int set[N];
  	printf("Enter the array elements:");
  	for(i=0;i<N;i++)
  	{
  		scanf("%d",&set);
	}
	printf("Enter the sum number:");
	scanf("%d",&tsum);
	for(i=0;i<N;i++)
	{
		ts+=set[i];
	}
	printf("sum of target:%d",ss(set,ts,tsum));
}

