#include <vector>
#include <iostream>
#include <string>

using namespace std;

int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        for (char g : guess) {
            if (c == g && c != g) {
                whitePegs++;
                break;
            }
        }
    }
    return whitePegs;
}

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (c == guess[0]) {
            blackPegs++;
            break;
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}