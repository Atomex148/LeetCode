class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelsMap;
        int counter = 0;

        for (char ch : jewels) {
            jewelsMap.insert(ch);
        }

        for (char ch : stones) {
            if (jewelsMap.find(ch) != jewelsMap.end()) {
                counter++;
            }
        }

        return counter;
    }
};