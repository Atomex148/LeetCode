class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int smallest_distance = std::numeric_limits<int>::max();
        int closest_num = std::numeric_limits<int>::max();
        for (int i : nums) {
            int distance = abs(i);
            if (distance < smallest_distance || (distance == smallest_distance && closest_num < i)) {
                smallest_distance = distance;
                closest_num = i;
            }
        }
        return closest_num;
    }
};