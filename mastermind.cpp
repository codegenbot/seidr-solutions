```cpp
#include <utility>
#include <algorithm>

std::pair<int, int> mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        if (count(code.begin(), code.end(), c) > 0) {
            white--;
        }
    }

    return std::make_pair(black, white);
}