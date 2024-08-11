class Solution {
public:
    string sortSentence(string s) {
        std::string myArray[9];
        int pos = 0;
        for (int i = 0; i < s.length(); i++) {
            if ('1' <= s[i] && s[i] <= '9') {
                myArray[s[i] - '0' - 1] = s.substr(pos, i - pos);
                i += 2;
                pos = i;
            }
        }

        std::string result = "";
        for (std::string str : myArray) {
            if (str == "") continue;
            result += str + ' ';
        }
        result.pop_back();

        return result;
    }
};