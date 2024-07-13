#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 0) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    return 0;
}