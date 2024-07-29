class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for (char ch : magazine) {
            map[ch] += 1;
        }

        for (char ch : ransomNote) {
            map[ch] -= 1;
            if (map[ch] < 0) return false;
        }

        return true;
    }
};