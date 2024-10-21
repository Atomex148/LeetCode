class Solution {
public:
    int maxUniqueSplit(std::string s) {
        int maxCount = 0;

        std::function<void(int, std::unordered_set<std::string>&)> backtrack = [&](int start, std::unordered_set<std::string>& set) {
            if (start == s.size()) {
                maxCount = std::max(maxCount, (int)set.size());
                return;
            }

            for (int len = 1; len <= s.size() - start; ++len) {
                std::string substr = s.substr(start, len);
                if (set.count(substr) == 0) {
                    set.insert(substr);
                    backtrack(start + len, set); 
                    set.erase(substr);
                }
            }
            };

        std::unordered_set<std::string> set;
        backtrack(0, set);
        return maxCount;
    }
};