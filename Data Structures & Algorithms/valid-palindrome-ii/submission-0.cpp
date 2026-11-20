class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                return isPal(s, start + 1, end) || isPal(s, start, end-1);
            }
            start++;
            end--;
        }
        return true;
        
    }

private:
    bool isPal(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};