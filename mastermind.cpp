```cpp
#include <algorithm>
using namespace std;

pair<int, int> mastermind(const string& code, const string& guess) {
    string all_chars = "RGYBO"; // assuming the 6 possible characters are R, G, Y, B, and O

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else if (count(all_chars.begin(), all_chars.end(), guess[i]) > 0) {
            white++;
        }
    }

    return {white, black};
}