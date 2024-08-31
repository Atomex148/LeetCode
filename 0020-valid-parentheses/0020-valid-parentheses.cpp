class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets;
        if (s[0] == ']' || s[0] == ')' || s[0] == '}') return false;

        for (char ch : s) {
            switch (ch) {
                case '[':
                case '(':
                case '{':
                    brackets.push(ch);
                    break;
                case ']':
                    if (!brackets.empty()) {
                        if (brackets.top() != '[') return false;
                    }
                    else return false;
                    brackets.pop();
                    break;
                case ')':
                    if (!brackets.empty()) {
                        if (brackets.top() != '(') return false;
                    }
                    else return false;
                    brackets.pop();
                    break;
                case '}':
                    if (!brackets.empty()) {
                        if (brackets.top() != '{') return false;
                    }
                    else return false;
                    brackets.pop();
                    break;
            }
        }

        if (!brackets.empty()) return false;
        return true;
    }
};