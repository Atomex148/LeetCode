class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string result;
        int maxLen = 0;
        for (int i = 0; i < s.length(); i++) {
            result += s[i];
            for (int j = i + 1; j < s.length(); j++) {
                size_t found = result.find(s[j]);
                if (found != std::string::npos) {
                    break;
                }
                result += s[j];
            }
            if (maxLen < result.length()) maxLen = result.length();
            result.clear();
        }
        return maxLen;
    }
};