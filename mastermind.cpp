#include <iostream>
#include <string>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != string::npos) {
            whitePegs++;
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}