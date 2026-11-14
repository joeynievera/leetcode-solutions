class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map <char, int> map = 
        {{'I', 1} , {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        char prev = s[s.size() - 1];
        int sum = map[prev];
        for (int i = s.size() - 2; i >= 0; i--) {
            int curr = map[s[i]];
            int last = map[prev];
            if (curr < last) {
                sum -= curr;
            } else {
                sum += curr;
            }
            prev = s[i];
        }
        return sum;
    }
};