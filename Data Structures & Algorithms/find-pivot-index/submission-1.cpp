class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sumLeft;
        vector<int> sumRight;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            sumLeft.emplace_back(sum);
        }
        sum = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            sum += nums[i];
            sumRight.emplace(sumRight.begin(), sum);
        }
        
        for (int i = 0; i < sumLeft.size(); i++) {
            if (sumLeft[i] == sumRight[i]) {
                return i;
            }
        }
        return -1;
    }
};