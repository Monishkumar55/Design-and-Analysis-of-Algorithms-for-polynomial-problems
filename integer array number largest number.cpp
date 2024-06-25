#include <stdio.h>
#include <limits.h>
int maxSubArraySum(int nums[],int size) {
    int max_sum = nums[0];
    int current_sum = nums[0];
    for (int i = 1; i < size; i++) {
        current_sum =(nums[i]>(current_sum + nums[i])) ? nums[i]:(current_sum + nums[i]);
        max_sum =(max_sum>current_sum)?max_sum:current_sum;
    }
    return max_sum;
}
int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int max_sum = maxSubArraySum(nums, size);
    printf("The maximum subarray sum is %d\n", max_sum);
    return 0;
}

