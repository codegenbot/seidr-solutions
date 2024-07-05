#include <iostream>
using namespace std;

int blackPegs(string code, string guess) {
    int correctPosition = 0;
    int correctColorWrongPos = 0;
    vector<char> codeArray(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                if (i == j) { // correct position
                    correctPosition++;
                } else { // correct color, wrong position
                    codeArray[i] = ' '; // mark as seen
                    correctColorWrongPos++;
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
    cout << black << endl;

    return 0;
}