#include <vector>
#include <iostream>
#include <string>

int mastermind(const string& code, const string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                ++count;
            }
        }
        whitePegs += count - blackPegs;
    }

    return {whitePegs, blackPegs};
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << result.second << endl;
    cout << result.first << endl;
    return 0;
}