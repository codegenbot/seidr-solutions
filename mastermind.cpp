```cpp
#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int white = 0, black = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]);
    }

    return make_pair(white, black);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}
```