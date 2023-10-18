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
/*
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0\n4
input:
BOYG
GYOB
output:
4\n0
input:
WYYW
BBOG
output:
0\n0
input:
GGGB
BGGG
output:
2\n2
input:
BBBB
OOOO
output:
0\n0
*/
int white(string code, string guess) {
    int cnt = 0;
    bool used[4] = {false};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j && code[i] == guess[j]) {
                cnt++;
                used[j] = true;
                break;
            }
        }
    }
    return cnt;
}

int black(string code, string guess) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    string code, guess;
    cin >> code >> guess;
    cout << white(code, guess) << "\n" << black(code, guess);
    return 0;
}
