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
    string str;
    while(cin >> str) {
        int n = str.length();
        int i = 0;
        bool res = 1;
        while(i < n) {
            if(str[i] == 'T' || str[i] == 'F') res &= (str[i] == 'T');
            else if(str[i] == '|') {
                int k = i + 1;
                while(k < n && str[k] == 'F') ++k;
                str[k] == 'T' ? res = 1 : (str[k] = 'F');
                i = k;
            } else {
                int k = i + 1;
                while(k < n && str[k] == 'T') ++k;
                str[k] == 'F' ? res = 0 : (str[k] = 'T');
                i = k;
            }
            ++i;
        }
        cout << (res ? "True" : "False") << endl;
    }
    return 0;
}
