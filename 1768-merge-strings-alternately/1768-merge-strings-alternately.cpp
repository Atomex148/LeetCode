class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        char* resultStr = new char[word1.length() + word2.length() + 1];
        resultStr[word1.length() + word2.length()] = '\0';

        int minLen = std::min(word1.length(), word2.length());

        for (int i = 0; i < minLen; i++) {
            resultStr[i * 2] = word1[i];
        }

        for (int i = 0; i < minLen; i++) {
            resultStr[(i * 2) + 1] = word2[i];
        }

        if (word1.length() > minLen) {
            for (int i = minLen; i < word1.length(); i++) {
                resultStr[i + minLen] = word1[i];
            }
        }
        else {
            for (int i = minLen; i < word2.length(); i++) {
                resultStr[i + minLen] = word2[i];
            }
        }

        std::string result(resultStr);
        delete[] resultStr;
        return result;
    }
};