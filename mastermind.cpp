#include <vector>
#include <iostream>
#include <string>

int whitePegs(const std::string& code, const std::string& guess) {
    int count = 0;
    for (char c : guess) {
        if (code.find(c) != std::string::npos) {
            ++count;
        }
    }
    return count;
}

int blackPegs(const std::string& code, const std::string& guess) {
    int count = 0;
    for (size_t i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    std::cout << white << "\n" << black << "\n";
    return 0;
}