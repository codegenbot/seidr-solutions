#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (code.find(guess[i]) != string::npos) {
                whitePegs++;
            }
        }

        if (blackPegs == 0 && whitePegs > 0) {
            cout << "1 ";
        } else if (blackPegs > 0) {
            cout << blackPegs;
        }
        cout << " " << whitePegs << endl;
    }

    return 0;
}