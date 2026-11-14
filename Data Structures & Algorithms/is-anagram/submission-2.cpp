class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> s_map;
        std::unordered_map<char, int> t_map;
        for (int i = 0; i < s.size(); i++) {
            if (s_map.count(s[i])) {
                s_map[s[i]]++;
            } else {
                s_map.emplace(s[i], 1);
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (t_map.count(t[i])) {
                t_map[t[i]]++;
            } else {
                t_map.emplace(t[i], 1);
            }
        }
        return s_map == t_map;
    }
};
