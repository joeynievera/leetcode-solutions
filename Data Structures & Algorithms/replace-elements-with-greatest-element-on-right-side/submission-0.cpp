class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       // try iterate from right to left
        int max = arr[arr.size()-1];
        
        // if arr is only one element 
        arr[arr.size() - 1] = -1;
        
        for (int i = arr.size() - 2; i >= 0; i--) {
            int temp = max;
            if (arr[i] > max) {
                max = arr[i];
            }
            arr[i] = temp;
        }
        
        return arr; 
    }
};