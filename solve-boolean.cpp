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
class Solution {
    public:
    bool andbool(bool x, bool y) {
        if (x == false || y == false) return false;
        else return true;
    } 
     bool orbool(bool x, bool y) {
        if (x == true || y == true) return true;
        else return false;
    } 
    void find(string s, int start, int end, int& p, int& q) {
        if (start == end) {
            p = start;
            q = end;
            return;
        }
        int l = -1,m = -1;
        stack<int> st;
        for (int i = start; i <= end; i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                if (l == -1) {
                    l = st.top();
                    if (l + 1 == i - 1) {
                        if (st.size() != 0) p = st.top();
                        else p = l;
                    }
                    m = i;
                    st.pop();
                    if (st.size() == 0) q = m;
                }
                else st.pop();
            }
            if (s[i] == '&' || s[i] == '|') {
                if (l == -1) {
                    p = i;
                }
                q = i;
            }
        }
    }
    bool recur(string s, int start, int end) {
        if (start == end) {
            return s[start] == 't';
        }
        int p,q;
        find(s,start,end,p,q);
        //cout << start << ' ' << end << ' ' << p << ' ' << q << endl;
        if (start == p) {
            if (s[p] == '&') {
                return andbool(recur(s,start+1,q-1),recur(s,q+1,end));
            }
            else return orbool(recur(s,start+1,q-1),recur(s,q+1,end));
        }
        else if (s[p] == '&') {
                return andbool(recur(s,start,p-1),recur(s,p+1,end));
            }
            else return orbool(recur(s,p+1,end),recur(s,start,p-1));
    }
    string booleanEvaluation(string exp) {
        return recur(exp,0,exp.size()-1)?"true":"false";
    }
};

int main() {
