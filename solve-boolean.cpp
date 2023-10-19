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
Given a string representing a Boolean expression consisting of T, F, |, and &,
evaluate it and return the resulting Boolean.
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
/* EDIT PATH */
string FILE_DIR = "/home/ubuntu/workspace/github/data-structures-algorithms/file";
string INPUT_DIR_IF = FILE_DIR+"/if.txt";
string INPUT_DIR_OR = FILE_DIR+"/or.txt";
string INPUT_DIR_AND = FILE_DIR+"/and.txt";
string INPUT_DIR_LONG = FILE_DIR+"/long.txt";
int main() {
    string s;
    // cin >> s;
    fstream fin(INPUT_DIR_LONG);
    string output = "";
    while (getline(fin, s)) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&' || s[i] == '|') {
            char c = s[i];
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if (c == '&') {
                if (a == 'T' && b == 'T') {
                    st.push('T');
                } else {
                    st.push('F');
                }
            } else {
                if (a == 'F' && b == 'F') {
                    st.push('F');
                } else {
                    st.push('T');
                }
            }
        } else {
            st.push(s[i]);
        }
    }
    if (st.top() == 'T') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
