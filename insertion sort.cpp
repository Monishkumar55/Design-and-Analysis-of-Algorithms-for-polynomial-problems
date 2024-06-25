#include<stdio.h>
void sort(int arr[], int n) 
{
    int i,key,j;
    for(i=1;i<n;i++) 
	{
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
		 {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[50],n;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    sort(arr,n);
    printf("Sorted array: ");
    for(int i=0;i<n; i++)
	{
        printf("%d",arr[i]);
	}
}
