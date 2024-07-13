#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    vector<char> codeArr(code.begin(), code.end());
    vector<char> guessArr(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeArr[i] == guessArr[i]) {
            codeArr[i] = 0;
            guessArr[i] = 0;
            black++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (codeArr[j] == guessArr[i]) {
                codeArr[j] = 0;
                guessArr[i] = 0;
                white++;
            }
        }
    }

    return black + white - black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}