#include <string>
#include <algorithm>

int main() {
    std::string code, guess;

    std::cin >> code >> guess;  // get the input from user

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 && guess.find(std::string(1, c)) != std::string::npos) {
            black++;
        } else if (std::count(code.begin(), code.end(), c) > 0) {
            white++;
        }
    }

    return {black, white};
}