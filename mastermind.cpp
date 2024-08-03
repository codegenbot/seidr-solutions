#include <vector>
#include <iostream>
#include <string>

using namespace std;

int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    vector<char> codeMap(6, '\0');
    for (char c : code) {
        codeMap[c]++;
    }
    for (char g : guess) {
        if (codeMap[g] > 0) {
            whitePegs++;
            codeMap[g]--;
        }
    }
    return whitePegs;
}

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
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