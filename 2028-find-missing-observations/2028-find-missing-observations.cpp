
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        if (mean == 6) {
            for (int i : rolls) {
                if (i != 6) {
                    return {};
                }
            }
            return std::vector<int>(n, 6);
        }
        else if (mean == 1) {
            for (int i : rolls) {
                if (i != 1) {
                    return {};
                }
            }
            return std::vector<int>(n, 1);
        }

        int lost_number = ((rolls.size() + n) * mean - accumulate(rolls.begin(), rolls.end(), 0)), 
            remainder = lost_number % n, on_cube = lost_number / n;

        if (on_cube > 6 || on_cube < 1 || (on_cube == 6 && remainder > 0)) return {};

        vector<int> result(n, on_cube);
        fill(result.begin(), result.begin() + remainder, on_cube + 1);

        return result;
    }
};