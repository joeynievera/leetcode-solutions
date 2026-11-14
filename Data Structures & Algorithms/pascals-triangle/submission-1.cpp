class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        int val;
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            row.emplace_back(1);
            val = 1;
            for (int j = 1; j <= i; j++) {
                val = val * (i - j + 1) / j;
                row.emplace_back(val);
            }
            triangle.emplace_back(row);
        }
        return triangle;
    }
};