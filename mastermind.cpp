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
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            int count = 0;
            for (int j = i + 1; j < code.size(); j++) {
                if (code[j] == guess[i]) {
                    count++;
                    break;
                }
            }
            whitePegs += count;
        }
    }
    cout << blackPegs << " " << whitePegs << endl;
    return 0;
}