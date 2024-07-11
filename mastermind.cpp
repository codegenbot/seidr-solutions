#include <iostream>
using namespace std;

string code, guess;

int whitePegs(string c, string g) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (c[i] == g[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string c, string g) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        bool foundInCode = false;
        for (int j = 0; j < 4; j++) {
            if (i != j && c[i] == g[j]) {
                foundInCode = true;
                break;
            }
        }
        if (foundInCode) {
            count++;
        }
    }
    return count;
}

int main() {
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    int white = 4 - black - whitePegs(code, guess);
    cout << white << endl << black << endl;
    return 0;
}