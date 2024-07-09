```cpp
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for(int j=i+1; j<4; j++) {
                if(guess[j] == code[i] && !found) {
                    whitePegs++;
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