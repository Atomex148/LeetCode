class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int minLen = 200;

        for (string str : strs) {
            if (str.length() < minLen) minLen = str.length();
        }

        for (int i = 0; i < minLen; i++) {
            char curLetter = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != curLetter) return prefix;
            }
            prefix += curLetter;
        }

        return prefix;
    }
};