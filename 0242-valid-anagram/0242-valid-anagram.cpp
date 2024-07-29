class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;

        if (s.length() != t.length()) return false;

        for (char ch : s) {
            map[ch] += 1;
        }

        for (char ch : t) {
            map[ch] -= 1;
            if (map[ch] < 0) return false;
        }

        return true;
    }
};