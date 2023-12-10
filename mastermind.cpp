```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <set>
using namespace std;

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    set<char> uniqueChars(guess.begin(), guess.end());
    for (auto it = uniqueChars.begin(); it != uniqueChars.end(); ++it) {
        if (code.find(*it) != string::npos) {
            blackPegs++;
        } else {
            whitePegs++;
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}
```