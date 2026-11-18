class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final;
        int count1 = 0;
        int count2 = 0;
        while (count1 < word1.size() || count2 < word2.size()) {
            if (count1 < word1.size()) {
                final += word1[count1];
                count1++;
            }
            if (count2 < word2.size()) {
                final += word2[count2];
                count2++;
            }
        }

        return final;
    }
};