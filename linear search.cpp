#include<stdio.h>
 int s(int arr[],int n,int x)
 {
 	int i,c=0;
 	for(i=0;i<n;i++)
 	{
 		if(arr[i]==x)
 		{
 			c+=1;
		}
	}
	return c;
 }
 int main()
 {
 	int arr[50],n,x,i;
 	printf("Enter the array size:");
 	scanf("%d",&n);
 	printf("Enter the array element:");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	}
	printf("Enter the x element:");
	scanf("%d",&x);
	if(s(arr,n,x)==1)
	{
		printf("Found");
	}
	else
		{
			printf("Not found");
		}
}
