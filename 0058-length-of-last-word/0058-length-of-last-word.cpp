class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length(), ending = 0;
        while (s[i] == ' ' || s[i] == '\0') { ending++; i--; }
        for (; i >= 0 && s[i] != ' '; i--);
        return s.length() - i - ending;
    }
};