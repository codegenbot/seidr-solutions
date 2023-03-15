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
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
*/
int main() {
    string code, guess;
    cin >> code >> guess;
    int b = 0, w = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            b++;
            code[i] = 'x';
            guess[i] = 'x';
        }
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == 'x') continue;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == 'x') continue;
            if (code[i] == guess[j]) {
                w++;
                guess[j] = 'x';
                break;
            }
        }
    }
    cout << b << endl << w << endl;
}
