#include <vector>
#include <string>

int whitePegs(const std::string& code, const std::string& guess) {
    int count = 0;
    for (char c : code) {
        if (guess.find(c) != std::string::npos && guess.find(c) != guess.rfind(c)) {
            count++;
        }
    }
    return count;
}

int blackPegs(const std::string& code, const std::string& guess) {
    int count = 0;
    for (char c : code) {
        if (guess.find(c) != std::string::npos && guess.find(c) == guess.rfind(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    // Read input from user
    std::string code, guess;
    std::cin >> code >> guess;

    // Calculate white and black pegs
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    // Print output
    std::cout << white << "\n" << black << "\n";

    return 0;
}