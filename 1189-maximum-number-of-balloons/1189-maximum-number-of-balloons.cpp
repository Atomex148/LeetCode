class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> balloon = { {'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1} }, word;

        for (char ch : text) {
            word[ch] += 1;
        }

        int number_of_baloons = numeric_limits<int>::max();

        for (pair<char, int> ch : balloon) {
            int cur_number_of_baloons = word[ch.first] / balloon[ch.first];
            if (cur_number_of_baloons < 1) return 0;
            else if (cur_number_of_baloons < number_of_baloons) number_of_baloons = cur_number_of_baloons;
        }

        return number_of_baloons;
    }
};
