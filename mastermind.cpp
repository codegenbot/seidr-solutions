#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
            }
        }
        white += min(count, 1);
    }

    return black + white - black;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "White pegs: " << result - 4 << endl;
    cout << "Black pegs: " << 4 << endl;
    return 0;
}