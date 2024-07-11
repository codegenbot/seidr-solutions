#include <iostream>
using namespace std;

string code, guess;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j && code[i] == guess[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    int white = 4 - black - whitePegs(code, guess);
    cout << whitePegs(code, guess) << endl << black << endl;
    return 0;
}