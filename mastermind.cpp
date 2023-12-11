#include <iostream>
#include <string>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            whitePegs++;
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}