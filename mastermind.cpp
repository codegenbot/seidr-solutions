#include <vector>
#include <iostream>
#include <string>

int getWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) == 1)
            whitePegs++;
    }
    return whitePegs;
}

int getBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) == 1 && count(code.begin(), code.end(), c) == 1)
            blackPegs++;
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cout << "Enter Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    int whitePegs = getWhitePegs(code, guess);
    int blackPegs = getBlackPegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}