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
    string code = "abcD";
    string guess = "aBcd";
    cout << whitePegs(code, guess) << endl;  // prints the number of white pegs
    cout << blackPegs(code, guess) << endl;  // prints the number of black pegs
    return 0;
}