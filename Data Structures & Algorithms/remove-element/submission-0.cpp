class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int size = nums.size();
        // iteratre through nums
        for (int i = 0; i < size; i++) {
            // if num == value store in nums
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                nums.emplace_back(-1);
                i--;
            } else if (nums[i] == -1) {
                continue;
            } else {
                count++;
            }
        }
        return count;
    }
};