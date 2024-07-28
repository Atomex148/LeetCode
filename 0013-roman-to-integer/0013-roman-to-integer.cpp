class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        char prevLetter = ' ';
        for (char ch : s) {
            switch (ch) {
                case 'I': {
                    prevLetter = 'I';
                    result++;
                    break;
                }

                case 'V': {
                    if (prevLetter == 'I') {
                        result += 3;
                    }
                    else result += 5;
                    break;
                }

                case 'X': {
                    if (prevLetter == 'I') {
                        result += 8;
                    }
                    else result += 10;
                    prevLetter = 'X';
                    break;
                }

                case 'L': {
                    if (prevLetter == 'X') {
                        result += 30;
                    }
                    else result += 50;
                    break;
                }

                case 'C': {
                    if (prevLetter == 'X') {
                        result += 80;
                    }
                    else result += 100;
                    prevLetter = 'C';
                    break;
                }

                case 'D': {
                    if (prevLetter == 'C') {
                        result += 300;
                    }
                    else result += 500;
                    break;
                }

                case 'M': {
                    if (prevLetter == 'C') {
                        result += 800;
                    }
                    else result += 1000;
                    break;
                }

                default:
                    return 0;
            }
        }
        return result;
    }
};