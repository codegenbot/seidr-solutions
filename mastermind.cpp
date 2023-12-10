```
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int getWhitePegs(const string& guess, const string& code) {
    int whitePegs = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int getBlackPegs(const string& guess, const string& code) {
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i] && guess[i + 1] == code[i + 1]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    string guess, code;
    int whitePegs, blackPegs;

    while (cin >> guess >> code) {
        whitePegs = getWhitePegs(guess, code);
        blackPegs = getBlackPegs(guess, code);
        cout << whitePegs << " " << blackPegs << endl;
    }

    return 0;
}
```