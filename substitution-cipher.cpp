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
This problem gives a string of words separated by spaces. The program must print the words in reverse order, separated by spaces.

For example,
input:
input:
hello world
output:
world hello

hi my name is sam
output:
sam is name my hi
input:
a b c d e
output:
e d c b a
input:
1 2 3 4 5
output:
5 4 3 2 1
output:
*/
int main() {
    string s;
    getline(cin, s);
    string t = "";
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') {
            cout << t << " ";
            t = "";
        }
        else {
            t += s[i];
        }
    }
    cout << t << endl;
    return 0;
}
