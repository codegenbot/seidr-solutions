```cpp
#include <iostream>
#include <string>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }
    
    return std::make_pair(white, black);
}

int main() {
    int white, black;
    std::string code = "RGOR";
    std::string guess = "BRBB";
    auto res = mastermind(code, guess);
    std::tie(white, black) = res;
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}