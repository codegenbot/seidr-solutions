#include <algorithm>
using namespace std;

int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;
    map<char, int> charCount;

    for (char c : code) {
        charCount[c]++;
    }

    for (char c : code) {
        if (c == guess[guess.find(c)]) {
            ++black;
        } else if (charCount.count(c) > 0 && charCount[c] > 1) {
            --charCount[c];
            ++white;
        }
    }

    return black + white;
}