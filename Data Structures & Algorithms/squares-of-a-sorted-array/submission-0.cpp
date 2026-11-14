class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares (nums.size());
        for (int i = 0; i < nums.size(); i++) {
            squares[i] = nums[i] * nums[i];
        }
        std::sort(squares.begin(), squares.end());
        return squares;
    }
};