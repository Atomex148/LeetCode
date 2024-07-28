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
        else if (result == s) return true;
        else continue;
    }

    return s == result;
}
};