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
04
input:
BOYG
GYOB
output:
40
input:
WYYW
BBOG
output:
00
input:
GGGB
BGGG
output:
22
input:
BBBB
OOOO
output:
00
*/
int main() {
    string code, guess;
    cin>>code;
    cin>>guess;
    int len = code.length();
    int count[6] = {0};
    int black = 0, white = 0;
    for(int i = 0; i < len; i++){
        if(code[i] == guess[i]){
            black++;
        }else{
            count[code[i] - 'A']++;
        }
    }
    for(int i = 0; i < len; i++){
        if(code[i] != guess[i] && count[guess[i] - 'A'] > 0){
            white++;
            count[guess[i] - 'A']--;
        }
    }
    cout<<black<<white<<endl;
    return 0;
}
