```cpp
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

int getWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0 && guess.find(std::string(1, c)) != std::string::npos) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int getBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (c == guess[0]) {
            blackPegs++;
            break;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int whitePegs = getWhitePegs(code, guess);
    int blackPegs = getBlackPegs(code, guess);
    std::cout << whitePegs << "\n" << blackPegs << "\n";
    return 0;
}