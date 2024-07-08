#include <string>
#include <vector>
#include <algorithm>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for (char c : guess_chars) {
        auto it = find(code_chars.begin(), code_chars.end(), c);
        if (it != code_chars.end()) {
            white++;
            code_chars.erase(it);
        }
    }

    return black + white;
}