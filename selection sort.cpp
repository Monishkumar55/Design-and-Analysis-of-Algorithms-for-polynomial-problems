#include<stdio.h>
int main()
{
	int arr[50],n,i,j,min,t;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			t=arr[min];
			arr[min]=arr[i];
			arr[i]=t;
		}
	}
	printf("The final array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
