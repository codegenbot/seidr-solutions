```cpp
#include <unordered_map>
using namespace std;

int mastermind(const string& code, const string& guess) {
    unordered_map<char, int> counts;
    for (char c : guess) {
        ++counts[c];
    }

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            --counts[guess[i]];
            ++black;
        } else if (--counts[guess[i]] > 0) {
            ++white;
        }
    }

    return black + white;
}