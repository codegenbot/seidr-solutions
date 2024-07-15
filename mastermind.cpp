#include <iostream>
#include <string>
#include <unordered_map>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(std::string code, std::string guess) {
    int totalCorrect = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            totalCorrect++;
        }
    }
    
    int blackCount = totalCorrect - whitePegs(code, guess);
    
    return blackCount;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    std::cout << white << " " << black << std::endl;
    return 0;
}