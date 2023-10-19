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
Given a string, remove all leading/trailing/duplicated empty spaces.
The given string will not be null, that is, it contains at least one character.
Example
Given "  a b ", return "a b"
Given "   I     love MTV ", return "I love MTV"
*/


// 1. use map
// 2. use array

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string res = "";
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (c[i] == a[j]) {
                res += b[j];
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}
