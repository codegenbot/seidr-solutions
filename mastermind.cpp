#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        for (int j = 0; j < code.size(); ++j) {
            if (code[i] == guess[j]) {
                if (i == j) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}