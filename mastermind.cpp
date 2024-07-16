#include <string>
#include <set>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::set<char> code_chars(code.begin(), code.end());

    int count = 0;
    for (char c : guess) {
        if (code_chars.count(c)) {
            count++;
        }
    }
    if (count > 4) {
        white = 4;
    } else {
        white = count - black;
    }

    return black + white;
}

int main() {
    std::string code = "abcx";
    std::string guess = "abcd";
    int result = mastermind(code, guess);
    return 0;
}