```cpp
#include <string>
#include <unordered_map>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // count characters in the code string
    std::unordered_map<char, int> code_counts;
    for (char c : code) {
        code_counts[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (code_counts[code[i]] > 0) {
            white++;
            code_counts[code[i]]--;
        }
    }

    return black;
}