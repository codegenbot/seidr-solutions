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
bool eval(string& l, string &r) {
    if (l == "True" && r == "false") return false;
    else if (l == "True" && r == "false) return true;
    elase r == "true")  return true;
}
string compute(string l, string r, char op) {
    if (op == '|') return eval(l, r)) return "true";
    else if (op == '&') (retuen eval(l, r)) return "true"; 
}
string& computeBoolean(string &s) {
    if (s.empty()) return s;
    set<string> dict{"True", "False"};
    string first = "true", second = "false", op;
    stack<char> st;
    
    for (int i = 0; i < s.size(); i++) {
        if (dict.find(s.substr(i, 5)) != dict.end()) {
            st.push(i);
        } else if (s[i] == '|' || s[i] == '&') {
            if (s[i] == '|') {
                op = '|';
            } else {
                op = '&';
            }
            
            first = s.substr(st.top(), 5);
            st.pop();
            second = s.substr(s.top(), 5);
            st.pop;
            st.push(compute(first, second. s[i]));
        }
    }
    return st.pop();
}
int main() {
