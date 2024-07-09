```cpp
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(size_t j = 0; j < 4; j++) {
        if(code[j] == guess[j]) {
            blackPegs++;
        } else {
            bool found = false;
            for(size_t k = 0; k < 4; k++) {
                if(code[k] == guess[j] && !found) {
                    if(k==j) blackPegs++; 
                    else whitePegs++;      
                    found = true;
                }
            }
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    std::string code;
    std::string guess;

    std::cout << "Enter the Mastermind code: ";
    std::getline(std::cin, code);
    std::cout << "Enter your guess: ";
    std::getline(std::cin, guess);

    int pegs = mastermind(code, guess);
    std::cout << "Number of pegs: " << pegs << std::endl;
    return 0;
}