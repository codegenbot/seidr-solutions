#include <iostream>
#include <string>

bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < code.length(); ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != std::string::npos) {
            whitePegs++;
        }
    }

    std::cout << blackPegs << " " << whitePegs << std::endl;

    return 0;
}