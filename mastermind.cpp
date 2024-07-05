#include <iostream>
#include <string>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int correctPosition = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                if (i == j) {
                    correctPosition++;
                }
            }
        }
    }
    return correctPosition;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int black = blackPegs(code, guess);
    int white = 4 - blackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}