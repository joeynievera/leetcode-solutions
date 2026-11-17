class Solution {
public:
    void reverseString(vector<char>& s) {
        // two pointer, one at the end, one at the beginning
        // and swap

        int start = 0;
        int end = s.size()-1;

        for (int i = 0; i < s.size() / 2; i++) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};