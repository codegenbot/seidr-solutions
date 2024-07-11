#include <iostream>
#include <string>

int main() {
    std::string code, guess;
    int blackPegs = 0, whitePegs = 0;
    
    std::cout << "Enter Mastermind code: ";
    std::cin >> code;
    
    std::cout << "Enter guess: ";
    std::cin >> guess;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            code[i] = guess[i] = ' '; // Mark as used
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j && code[i] != ' ' && code[i] == guess[j]) {
                ++whitePegs;
                code[i] = guess[j] = ' '; // Mark as used
            }
        }
    }
    
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;
    
    return 0;
}