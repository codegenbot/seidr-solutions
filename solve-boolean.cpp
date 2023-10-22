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
  bool res = false;
  string s;
  while (cin >> s) {
    stack<char> ops;
    stack<bool> vals;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == ' ') continue;
      else if (s[i] == '&' || s[i] == '|')
        ops.push(s[i]);
      else if (s[i] == 'T')
        vals.push(true);
      else if (s[i] == 'F')
        vals.push(false);
      else if (s[i] == ')') {
        char op = ops.top();
        ops.pop();
        bool val1 = vals.top();
        vals.pop();
        bool val2 = vals.top();
        vals.pop();
        if (op == '|') vals.push(val1 || val2);
        else if (op == '&') vals.push(val1 && val2);
      }
    }
    res = vals.top();
    if (res)
      cout << "True" << endl;
    else
      cout << "False" << endl;
  }
  return 0;
}
