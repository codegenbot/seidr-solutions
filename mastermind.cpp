```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeVec(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            auto it = remove(codeVec.begin(), codeVec.end(), code[i]);
            codeVec.erase(it, codeVec.end());
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << white << endl;
    cout << black << endl;
    return 0;
}