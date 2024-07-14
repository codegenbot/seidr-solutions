#include <vector>
#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 && std::find(code.begin(), code.end(), c) != code.end()) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 && &c == &code[std::find(code.begin(), code.end(), c) - code.begin()]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    // Read input from user
    std::cin >> code >> guess;

    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);

    // Print output corresponding to the task description
    std::cout << whitePegs << "\n" << blackPegs << "\n";

    return 0;
}