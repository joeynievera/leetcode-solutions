class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incCount = 1;
        int decCount = 1;
        int max = 1;
        /* 
        should only have to iterate once
        */
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                incCount++;
                if (incCount > max) {
                    max = incCount;
                } else if (decCount > max) {
                    max = decCount;
                }
                decCount = 1;
            } else if (nums[i] < nums[i + 1]) {
                decCount++;
                if (incCount > max) {
                    max = incCount;
                } else if (decCount > max) {
                    max = decCount;
                }
                incCount = 1;
            }
            else {
               if (incCount > max) {
                    max = incCount;
                } else if (decCount > max) {
                    max = decCount;
                }
                incCount = 1;
                decCount = 1;
            }
        }
        return max;
    }
};