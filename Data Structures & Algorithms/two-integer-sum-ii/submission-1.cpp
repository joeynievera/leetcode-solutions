class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 1;
        int end = numbers.size();
        while (true) {
            if (numbers[start - 1] + numbers[end - 1] == target) {
                numbers = {start, end};
                return numbers;
            }
            else if (numbers[start - 1] + numbers[end - 1] > target) {
                end--;
            } else {
                start++;
            }
        }
    }
};
