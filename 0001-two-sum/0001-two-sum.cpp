class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result(2);

        for (int i = 0; i < nums.size(); i++) {
            int to_find = target - nums[i];

            if (map.find(to_find) != map.end()) {
                result[1] = i;
                result[0] = map[to_find];
                return result;
            }

            map[nums[i]] = i;
        }

        return result;
    }
};