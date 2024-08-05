#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        if (guess.find(c) != string::npos) {
            if (code.find(c) == guess.find(c)) {
                black++;
            } else {
                white++;
            }
        }
    }

    return {black, white};
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;

    int result[] = mastermind(code, guess);
    cout << result[0] << endl;  // black pegs
    cout << result[1] << endl;  // white pegs

    return 0;
}