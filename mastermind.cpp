#include <string>
#include <vector>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    std::vector<char> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        codeMap[static_cast<int>(c)]++;
    }
    for (char c : guess) {
        guessMap[static_cast<int>(c)]++;
    }
    return std::accumulate(codeMap.begin(), codeMap.end(), 0, 
                             [&count](int sum, char c) { 
                                 return sum + (guessMap[static_cast<int>(c)] > 0 ? 1 : 0); 
                             }) - count; 
}

int blackPegs(std::string code, std::string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    // Use your whitePegs and blackPegs functions here
    return 0;
}