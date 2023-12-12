```
#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int black = 0, white = 0;
    int code_count[6] = {0};
    int guess_count[6] = {0};
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            code_count[code[i] - 'A']++;
            guess_count[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        white += min(code_count[i], guess_count[i]);
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