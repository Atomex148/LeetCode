class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int i = 0, j = height.size() - 1;

        while (i != j) {
            int currHeight = min(height[i], height[j]);
            int currArea = currHeight * (j - i);
            if (maxWater < currArea) maxWater = currArea;
            (height[i] < height[j]) ? i++ : j--;
        }

        return maxWater;
    }
};