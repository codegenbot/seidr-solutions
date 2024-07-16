#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i] && i != j) {
                found = true;
                break;
            }
        }
        if (!found) white++;
    }

    return black + white;
}

int main() {
    std::string code, guess;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter a guess: ";
    std::cin >> guess;
    int result = mastermind(code, guess);
    std::cout << "Number of black pegs: " << result / 2 << "\n";
    std::cout << "Number of white pegs: " << result - (result / 2) * 2 << "\n";
    return 0;
}