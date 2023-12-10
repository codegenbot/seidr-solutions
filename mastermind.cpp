```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;

    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            int j = 0;
            while (j < code.size() && code[j] != guess[i]) {
                j++;
            }
            if (j < code.size()) {
                whitePegs++;
            }
        }
    }

    cout << blackPegs << " " << whitePegs << endl;
    return 0;
}
```