```cpp
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i=0; i<4; i++) {
        if(guess.at(i) == code.at(i)) { 
            blackPegs++;
        } else {
            for(size_t j=0; j<4; j++) {
                if(guess.at(j) == code[i]) {
                    if(i==j) blackPegs++; 
                    else whitePegs++;      
                    break;
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