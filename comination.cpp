#include <stdio.h>
 void subset(int arr[], int data[], int start, int end, int index, int r)
{
    int j, i;
    if (index == r) {
        for (j = 0; j < r; j++)
            printf("%d ", data[j]);
        printf("\n");
}
        return;
    for (i = start; i <= end && end - i + 1 >= r - index; i++)
    }
        subset(arr, data, i+1, end, index+1, r);
    }
void printsubset(int arr[], int n, int r)
    {
        data[index] = arr[i];
{
    int data[r];
    subset(arr, data, 0, n - 1, 0, r);
}
int main()
{
    int arr[20], k, n, i;
    printf("Enter the number of input : ");
    scanf("%d", &n);
    printf("\nEnter the integers: \n");
    for (  i = 0; i < n; i++)
    {
	scanf("%d", &arr[i]);
    }
    printf("Enter value of k: ");
    scanf("%d", &k);
    printsubset(arr, n, k);
    return 0;
} 
