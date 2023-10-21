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
True
input:
t&f
output:
False
*/
int main() {
  string s;
  cin >> s;
  stack<bool> b;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'T')
      b.push(true);
    else if (s[i] == 'F')
      b.push(false);
    else if (s[i] == '&') {
      bool a = b.top();
      b.pop();
      bool a1 = b.top();
      b.pop();
      b.push(a1 & a);
    } else {
      bool a = b.top();
      b.pop();
      bool a1 = b.top();
      b.pop();
      b.push(a1 | a);
    }
  }
  cout << (b.top() ? "True" : "False") << endl;
  return 0;
}
