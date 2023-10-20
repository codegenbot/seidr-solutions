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
Given a string of digits, return the sumof the digits whose following digit is the same.
For example,
input:
99
output:
9
input:
88
output:
8
input:
77
output:
7
input:
55
output:
5
input:
44
output:
4
*/
class Solution {
public:
    int solve(string s) {
        int ans = 0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == s[i+1]) ans += (s[i] - '0');
        }
        return ans;
    }
};
int main() {
    Solution s;
    cout << s.solve("99") << endl;
    cout << s.solve("88") << endl;
    cout << s.solve("77") << endl;
    cout << s.solve("55") << endl;
    cout << s.solve("44") << endl;
}
