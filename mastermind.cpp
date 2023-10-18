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
    string a, b;
    cin >> a >> b;
    map<char, int> m1, m2;
    for (int i = 0; i < 4; i++) {
        m1[a[i]]++;
        m2[b[i]]++;
    }
    int black = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] == b[i]) {
            black++;
            m1[a[i]]--;
            m2[b[i]]--;
        }
    }
    int white = 0;
    for (int i = 0; i < 4; i++) {
        if (m1[a[i]] > 0 && m2[a[i]] > 0) {
            white++;
            m1[a[i]]--;
            m2[a[i]]--;
        }
    }
    cout << white << " " << black << endl;
    return 0;
}
