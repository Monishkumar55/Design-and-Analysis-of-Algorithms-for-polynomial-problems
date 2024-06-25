#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    int idx;
} Pair;

Pair* find_indices(int* nums, int numsSize, int indexdiff, int valuediff) {
    Pair* result = (Pair*)malloc(sizeof(Pair));
    result->val = -1;
    result->idx = -1;

    int* index_dict = (int*)malloc(sizeof(int) * (numsSize + 1));
    for (int i = 0; i < numsSize; i++) {
        index_dict[nums[i]] = i;
    }

    for (int i = 0; i < numsSize; i++) {
        if (index_dict[nums[i] - valuediff] != 0 && i - index_dict[nums[i] - valuediff] == indexdiff) {
            result->val = nums[i] - valuediff;
            result->idx = i;
            break;
        }
    }

    free(index_dict);
    return result;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int indexdiff = 3;
    int valuediff = 0;

    Pair* result = find_indices(nums, numsSize, indexdiff, valuediff);

    if (result->val != -1) {
        printf("(%d, %d)\n", result->idx, result->idx - indexdiff);
    } else {
        printf("No such pair found.\n");
    }

    free(result);
    return 0;
}
