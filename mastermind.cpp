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
    vector<string> code = {"RRRR", "BOYG", "WYYW", "GGGB", "BBBB"};
    vector<string> guess = {"RRRR", "GYOB", "BBOG", "BGGG", "OOOO"};
    int whitePegs, blackPegs;
    for (int i = 0; i < code.size(); i++) {
        whitePegs = 0;
        blackPegs = 0;
        for (int j = 0; j < guess[i].length(); j++) {
            if (guess[i][j] == code[i][j]) {
                blackPegs++;
            } else if (guess[i].find(code[i][j]) != string::npos) {
                whitePegs++;
            }
        }
        cout << "White pegs: " << whitePegs << endl;
        cout << "Black pegs: " << blackPegs << endl;
    }
    return 0;
}