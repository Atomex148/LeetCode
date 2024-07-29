class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for (int i : nums) {
            if (set.find(i) == set.end()) {
                set.insert(i);
                continue;
            }
            return 1;
        }

        return 0;
    }
};