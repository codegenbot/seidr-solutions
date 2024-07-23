#include <string>
#include <iostream>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count black pegs first
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count white pegs now
    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d && d != c) {
                white++;
            }
        }
    }

    return black + white;

}

int main() {
    std::string code, guess;
    std::getline(std::cin, code);
    std::getline(std::cin, guess);
    std::cout << mastermind(code, guess);
    return 0;
}