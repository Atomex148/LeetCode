class Solution {
public:
    bool isPowerOfFour(int n) {
        if (!((n > 0) && ((n & (n - 1)) == 0))) {
            return false;
        }

        unsigned int bitPosition = 0;
        while (n > 1) {
            n >>= 2;
            bitPosition += 2;
        }

        return (n == 1);
    }
};