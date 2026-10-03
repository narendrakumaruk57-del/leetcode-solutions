#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int n = nums.size();
        // Bubble sort variant: push zeros to the end by swapping adjacent elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (nums[j] == 0 && nums[j + 1] != 0) {
                    // Swap the zero with the non-zero element next to it
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }
};