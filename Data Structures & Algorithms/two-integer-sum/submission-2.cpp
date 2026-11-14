class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int difference;
        std::unordered_map<int, int> hash;
        vector <int> answer;
        for (int i = 0; i < nums.size(); i++) {
            difference = target - nums[i];
            if (hash.find(difference) != hash.end()) {
                return {hash[difference], i};
            } else {
                hash.emplace(nums[i], i);
            }
        }
        return {};
    }
};
