class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool firstLetter = false;;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                firstLetter = true;
                length++;
            } else if (!firstLetter) {
                continue;
            } else {
                return length;
            }
        }
        return length;
    }
};