```
#include <iostream>
#include <string>
using namespace std;
int getWhitePegs(const string& guess) {
    int whitePegs = 0;
    for (int i = 0; i < guess.size(); i++) {
        if (guess[i] == 'W') {
            whitePegs++;
        }
    }
    return whitePegs;
}
int getBlackPegs(const string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < guess.size(); i++) {
        if (guess[i] == 'B') {
            blackPegs++;
        }
    }
    return blackPegs;
}
int main() {
    string guess;
    int whitePegs, blackPegs;
    while(cin >> guess) {
        whitePegs = getWhitePegs(guess);
        blackPegs = getBlackPegs(guess);
        cout << "White pegs: " << whitePegs << endl;
        cout << "Black pegs: " << blackPegs << endl;
    }
    return 0;
}
```