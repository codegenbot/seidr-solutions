```
#include <iostream>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            int count = 0;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == code[i]) {
                    count++;
                }
            }
            whitePegs += count;
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}
```