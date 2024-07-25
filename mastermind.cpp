#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    return black + white;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::cout << mastermind(code, guess) << '\n';
    return 0;
}