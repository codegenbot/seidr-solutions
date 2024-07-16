#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0, black = 0;
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        }
    }
    for (char c : guess) {
        if (code.find(c) != std::string::npos) {
            white++;
            code.erase(code.find(c), 1);
        }
    }
    return white - black;
}

int main() {
    int white, black;
    std::string code = "RGOR";
    std::string guess = "BRBB";
    std::tie(white, black) = mastermind(code, guess);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}