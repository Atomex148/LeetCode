class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_set<char> balloon = { 'b', 'a', 'l', 'o', 'n'};
        unordered_map<char, int> word;

        for (char ch : text) {
            if (balloon.find(ch) != balloon.end()) {
                word[ch] += 1;
            }
        }

        if (word.find('b') != word.end() && word.find('a') != word.end() && word.find('l') != word.end()
            && word.find('o') != word.end() && word.find('n') != word.end()) {
            return min({ word['b'], word['a'], word['l'] / 2, word['o'] / 2, word['n'] });
        }

        return 0;
    }
};
