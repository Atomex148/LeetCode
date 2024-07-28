class Solution {
public:
    bool isSubsequence(string s, string t) {
        string result = "";
        int index = 0;

        for (char ch : t) {
            if (ch == s[index]) {
                result += ch;
                index++;
            }
            else continue;
            if (result == s) return true;
        }

        return s == result;
    }
};