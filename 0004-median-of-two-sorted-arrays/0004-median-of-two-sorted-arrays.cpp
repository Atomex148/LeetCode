class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result = 0;
        if (!nums1.empty()) {
            for (int num : nums2) {
                std::vector<int>::iterator pos = std::upper_bound(nums1.begin(), nums1.end(), num);
                nums1.insert(pos, num);
            }

            int num1Len = nums1.size();
            if (num1Len % 2 == 0 && num1Len != 1) {
                result = (nums1[num1Len / 2 - 1] + nums1[num1Len / 2]) / 2.0;
            }
            else {
                result = nums1[(num1Len / 2)];
            }
        }
        else {
            int num2Len = nums2.size();
            if (num2Len % 2 == 0 && num2Len != 1) {
                result = (nums2[num2Len / 2 - 1] + nums2[num2Len / 2]) / 2.0;
            }
            else {
                result = nums2[(num2Len / 2)];
            }
        }
        return result;
    }
};