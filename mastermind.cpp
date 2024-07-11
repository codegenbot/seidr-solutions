Here is the modified code:
```cpp
#include <string>

int whitePegs(string code, string guess) {
    int count = 0;
    vector<char> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
            count++;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (codeMap[i] > 1 || guessMap[i] > 1) {
            return -1;
        }
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