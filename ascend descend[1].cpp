#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
    int i, j, temp;

    for (i = 0; i < 5; i++)
	 {
        for (j = i + 1; j < 5; j++) 
		{
            if (arr[i] > arr[j])
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 5; i < 10; i++)
	 {
        for (j = i + 1; j < 10; j++) 
		{
            if (arr[i] < arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array elements in ascending and descending order: ");
    for (i = 0; i < 10; i++)
	{
        printf("%d ", arr[i]);
    }
    return 0;
}
