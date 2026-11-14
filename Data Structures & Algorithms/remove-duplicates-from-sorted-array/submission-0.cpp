class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = -1000;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == prev && nums[i] != -1000) {
                prev = nums[i];
                nums.erase(nums.begin() + i);
                nums.emplace_back(-1000);
                i--;
            } else if (nums[i] == -1000) {
                continue;
            } else {
                prev = nums[i];
                count++;
            }
        }
        return count;
    }
};