#include <vector>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for (char c : guess) {
        if (code.find(c) != std::string::npos && code.count(c) > 1) {
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        }
    }

    return std::make_pair(white, black).second;
}

int main() {
    // Example inputs
    std::string code1 = "RRRR";
    std::string guess1 = "RRRR";
    int result1 = mastermind(code1, guess1);
    std::cout << result1 << "\n";

    std::string code2 = "BOYG";
    std::string guess2 = "GYOB";
    int result2 = mastermind(code2, guess2);
    std::cout << result2 << "\n";

    // Add more inputs...

    return 0;
}