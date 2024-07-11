```cpp
#include <string>
#include <vector>

int whitePegs(string code, string guess) {
    int count = 0;
    vector<int> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        codeMap[c]++;
    }
    for (char c : guess) {
        guessMap[c]++;
    }
    int blackPegsCount = blackPegs(code, guess);
    return count - blackPegsCount;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string code = "ABC1";
    string guess = "AC11";
    int whitePegsCount = whitePegs(code, guess);
    cout << "Number of white pegs: " << whitePegsCount << endl;
    int blackPegsCount = blackPegs(code, guess);
    cout << "Number of black pegs: " << blackPegsCount << endl;
    return 0;
}