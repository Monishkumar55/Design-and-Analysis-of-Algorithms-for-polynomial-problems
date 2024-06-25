#include<stdio.h>
int main()
{
	int arr[50],n,i,j,t;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("The final array:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
}
