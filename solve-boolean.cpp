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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/
int main() {
    string input;
    while (cin >> input) {
        stack<char> stk;
        map<char, char> m;
        m['|'] = '|';
        m['&'] = '&';
        m['t'] = 't';
        m['f'] = 'f';
        bool result = false;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '|' || input[i] == '&') {
                char c = input[i];
                i += 2;
                if (input[i] == 't') {
                    if (m[c] == '|') {
                        result = true;
                        break;
                    } else {
                        m[c] = 't';
                    }
                } else if (input[i] == 'f') {
                    if (m[c] == '&') {
                        result = false;
                        break;
                    } else {
                        m[c] = 'f';
                    }
                }
            }
        }
        if (result) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
 
    return 0;
}
