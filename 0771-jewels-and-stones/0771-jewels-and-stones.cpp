class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jewelsMap;
        int counter = 0;

        for (char ch : jewels) {
            jewelsMap[ch] = 0;
        }

        for (char ch : stones) {
            if (jewelsMap.find(ch) != jewelsMap.end()) {
                counter++;
            }
        }

        return counter;
    }
};