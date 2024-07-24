Here is the corrected code:

```cpp
#include <iostream>
#include <string>
using namespace std;

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    vector<char> codeCopy(code.begin(), code.end());
    for (char c : guess) {
        if (find(codeCopy.begin(), codeCopy.end(), c) != codeCopy.end()) {
            codeCopy.erase(remove(codeCopy.begin(), codeCopy.end(), c), codeCopy.end());
            ++whitePegs;
        }
    }
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
}