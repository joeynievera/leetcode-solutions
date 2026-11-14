class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // you got forward and right
        int i = 0;
        int j = 0;
        int size =  matrix.size() * matrix[0].size();;
        vector<int> elements;
        int top = 0;
        int right = matrix[0].size() - 1;
        int left = 0;
        int bottom = matrix.size() - 1;
        int direction = 1; // 1 is right, 2 is down, 3 is left, 4 is up
        // once you reach a border you go to the right
        while (elements.size() < size) {
            elements.emplace_back(matrix[i][j]);
            if (direction == 1) {
                if (j == right) {
                    top++;
                    i++;
                    direction = 2;
                } else {
                    j++;
                } 
            } else if (direction == 2) {
                if (i == bottom) {
                    right--;
                    j--;
                    direction = 3;
                } else {
                    i++;
                }
            } else if (direction == 3) {
                if (j <= left) {
                    bottom--;
                    i--;
                    direction = 4;
                } else {
                    j--;
                }
            } else {
                if (i <= top) {
                    left++;
                    j++;
                    direction = 1;
                } else {
                    i--;
                }
            }
        }
        return elements;
    }
};
