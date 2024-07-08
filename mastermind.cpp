#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, guess;
    int blackPegs = 0, whitePegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                whitePegs++;
            } else if (!duplicate_check(guess[i], guess)) { // added check to prevent duplicate characters in the guess string
                blackPegs++;
            }
        }

        cout << whitePegs << " " << blackPegs << endl;
    }

    return 0;
}
```