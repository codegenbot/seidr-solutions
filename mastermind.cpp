#include <iostream>
#include <string>

using namespace std;

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
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (i != j && code[i] == guess[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    int white = 4 - black;
    cout << white << endl << black << endl;
    return 0;
}