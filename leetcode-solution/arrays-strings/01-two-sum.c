#include <stdio.h>
#include <stdlib.h>

// Note: LeetCode provides the function signature below.
// The returnSize pointer should be set to the size of the returned array (which is 2 here).
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    
    // Check every possible pair to find the two numbers that add up to the target
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    return NULL; // Return NULL if no solution is found
}

// Local testing main function (to test before submitting on LeetCode)
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = 4;
    int returnSize;
    
    int* ans = twoSum(nums, numsSize, target, &returnSize);
    
    if (ans != NULL) {
        printf("Indices found: [%d, %d]\n", ans[0], ans[1]);
        free(ans); // Always free dynamically allocated memory
    } else {
        printf("No solution found.\n");
    }
    
    return 0;
}