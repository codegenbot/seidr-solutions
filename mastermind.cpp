#include <algorithm>
using namespace std;

int mastermind(const string& code, const string& guess) {
    map<char, int> char_count;
    for (char c : guess) {
        ++char_count[c];
    }
    int white = 0;
    int black = 0;

    for (char c : code) {
        if (c == guess[guess.find(c)]) {
            ++black;
        } else if (char_count[c] > 0) {
            ++white;
            --char_count[c];
        }
    }

    return black + white;