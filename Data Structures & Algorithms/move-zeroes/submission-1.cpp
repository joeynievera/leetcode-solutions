class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int runs = 0;
        for (int i = 0; i < nums.size(); i++) {
            runs++;
            if (nums[i] == 0 && runs < nums.size()) {
                nums.erase(nums.begin() + i);
                nums.emplace_back(0);
                i--;
            } else {
                continue;
            }
        }
    }
};