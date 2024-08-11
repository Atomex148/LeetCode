class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) return 0;
        else if (divisor == dividend) return 1;

        bool pos = (dividend > 0 == divisor > 0);

        unsigned int _dividend = abs(dividend), _divisor = abs(divisor), ans = 0;
        while (_dividend >= _divisor) {
            short shift = 0;
            while (_dividend > _divisor << (shift + 1)) shift++;

            ans += 1 << shift;
            _dividend -= _divisor << shift;
        }

        if (ans >= INT_MAX && pos) return INT_MAX;
        else if (ans > INT_MAX) return INT_MIN;

        if (pos) return ans;
        else return -1 * ans;
    }
};