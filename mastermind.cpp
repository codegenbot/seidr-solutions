#include <iostream>
#include <string>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    
    // getline(cin, code);
    // getline(cin, guess);
    cin >> code >> guess;

    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != string::npos && !whitePegs) {
            whitePegs++;
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}