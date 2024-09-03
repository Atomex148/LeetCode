class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        const int emount_of_students = chalk.size();
        if (emount_of_students == 1) return 0;
        long chalk_sum = 0;
        for (int i = 0; i < emount_of_students; i++) chalk_sum += chalk[i];
        k = k % chalk_sum;

        for (int i = 0; i < emount_of_students; i++) {
            if (k < chalk[i]) return i;
            k -= chalk[i];
        }

        return 0;
    }
};