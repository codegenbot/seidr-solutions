```cpp
#include <string>
#include <vector>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    std::vector<int> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        int asciiVal = static_cast<int>(c); 
        codeMap[asciiVal]++;
    }
    for (char c : guess) {
        int asciiVal = static_cast<int>(c);
        guessMap[asciiVal]++;
    }
    int blackPegsCount = blackPegs(code, guess);
    return count - blackPegsCount;
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
    return 0;
}