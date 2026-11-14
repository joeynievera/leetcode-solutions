class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
      
        // Calculate the expected sum of numbers from 1 to n using the formula: n * (n + 1) / 2
        int expectedSum = (1 + n) * n / 2;
      
        // Create a set to store unique elements from the array
        // This will automatically remove the duplicate number
        unordered_set<int> uniqueNumbers(nums.begin(), nums.end());
      
        // Calculate the sum of unique elements (missing the duplicate)
        int sumOfUniqueElements = 0;
        for (int number : uniqueNumbers) {
            sumOfUniqueElements += number;
        }
      
        // Calculate the actual sum of all elements in the array (including the duplicate)
        int actualSum = accumulate(nums.begin(), nums.end(), 0);
      
        // The duplicate number = actualSum - sumOfUniqueElements
        // The missing number = expectedSum - sumOfUniqueElements
        return {actualSum - sumOfUniqueElements, expectedSum - sumOfUniqueElements};
    }
};