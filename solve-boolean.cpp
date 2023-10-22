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
    std::cout << "Please input a Boolean expression: ";
    cin >> input;
    stack<char> s;
    for (int i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (c == '&' || c == '|') {
            char op = c;
            char r = s.top();
            s.pop();
            char l = s.top();
            s.pop();
            char res;
            if (op == '&') {
                res = (l == 't' && r == 't') ? 't' : 'f';
            } else if (op == '|') {
                res = (l == 't' || r == 't') ? 't' : 'f';
            }
            s.push(res);
        } else {
            s.push(c);
        }
    }
    std::cout << ((s.top() == 't') ? "True" : "False") << endl;
    return 0;
}
