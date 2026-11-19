class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min;
        for (int i = prices.size() - 1; i >= 0; i--) {
            int j = i;
            min = prices[i];
            while (j >= 0) {
                if (prices[j] < min) {
                    min = prices[j];
                    j--;
                } else {
                    j--;
                }
            }
            if ((prices[i] - min) > max) {
                max = prices[i]-min;
            }
        }
        return max;
    }
};
