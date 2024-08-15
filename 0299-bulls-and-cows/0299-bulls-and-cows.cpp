class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        unordered_map<char, int> map;

        for (char ch : secret) map[ch]++;

        for (int i = 0; i < secret.length(); i++) {
            if (guess[i] == secret[i]) {
                bulls++;
                map[guess[i]]--;
            }
        }

        for (int i = 0; i < secret.length(); i++) {
            if (guess[i] != secret[i] && map[guess[i]] > 0) {
                cows++;
                map[guess[i]]--;
            }
        }

        string result = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return result;

    }
};