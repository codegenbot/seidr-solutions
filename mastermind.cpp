#include <iostream>
#include <string>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (guess[i] == code[j] && i != j) {
                    white++;
                }
            }
        }
    }
    
    return std::make_pair(white, black);
}

int main() {
    int white, black;
    std::string code = "RGOR";
    std::string guess = "BRBB";
    std::tie(white, black) = mastermind(code, guess);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0; 
}