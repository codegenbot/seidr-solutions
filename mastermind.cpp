#include <vector>
#include <iostream>
#include <string>

using namespace std;

int getWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (char c : guess) {
        if (count(code.begin(), code.end(), c) > 0) {
            whitePegs++;
            code.erase(remove(code.begin(), code.end(), c), code.end());
        }
    }
    return whitePegs;
}

int getBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (char c : guess) {
        if (code[guess.find(c)] == c) {
            blackPegs++;
            code.erase(remove(code.begin(), code.end(), c), code.end());
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int whitePegs = getWhitePegs(code, guess);
    int blackPegs = getBlackPegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}