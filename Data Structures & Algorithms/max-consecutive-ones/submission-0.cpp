class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev = 0;
        int count = 0;
        int max_count = 0;
        // detect starting point
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1 && prev == 0) {
                count = 1;
                prev = nums[i];
                if (count > max_count) {
                    max_count = count;
                }
            } else if (nums[i] == 1 && prev == 1) {
                count += 1;
                prev = nums[i];
                if (count > max_count) {
                    max_count = count;
                }
            } else {
                count = 0;
                prev = nums[i];
            }
        }
        return max_count;
    }
};