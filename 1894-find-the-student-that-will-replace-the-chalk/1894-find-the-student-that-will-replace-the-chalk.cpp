class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int index = 0;
        const int emount_of_students = chalk.size();
        if (emount_of_students == 1) return 0;
        long chalk_sum = 0;
        for (int i = 0; i < chalk.size(); i++) {
            chalk_sum += chalk[i];
        }

        while (k > chalk_sum) k -= chalk_sum;

        while (true) {
            index = index % emount_of_students;
            if (k >= chalk[index]) k -= chalk[index];
            else break;
            index++;    
        }
        return index;
    }
};