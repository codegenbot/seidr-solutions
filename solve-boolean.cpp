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


// 很简单，但是有一个坑，就是括号里面的结果是放在res里面的，而不是在数组里面
// 这样的话，括号里面的结果就会被改变，所以要先括号里面的结果，然后再放到数组里面
// 另外，判断括号的时候，要判断是否越界，这个要注意
bool judge(string s) {
    int n = s.size();
    vector<bool> res(n, false);
    for(int i = 0; i < n; i++) {
        if(s[i] == 'T') res[i] = true;
        else if(s[i] == 'F') res[i] = false;
        else if(s[i] == ')') {
            int j = i - 1;
            while(j >= 0 && s[j] != '(') j--;
            res[j] = res[i];
        }
    }
    int i = 0;
    while(i < n && s[i] != '(') i++;
    return res[i];
}

string judge2(string s) {
    if(s.size() == 1) return s;
    int n = s.size();
    int i = 0;
    vector<char> res;
    while(i < n) {
        if(s[i] == 'T') res.push_back(s[i]);
        else if(s[i] == 'F') res.push_back(s[i]);
        else if(s[i] == '&') {
            if(res.back() == 'T' && s[i + 1] == 'T') res.push_back('T');
            else res.push_back('F');
            i++;
        }
        else if(s[i] == '|') {
            if(res.back() == 'F' && s[i + 1] == 'F') res.push_back('F');
            else res.push_back('T');
            i++;
        }
        else if(s[i] == '(') {
            int j = i + 1;
            int cnt = 1;
            while(cnt != 0) {
                if(s[j] == '(') cnt++;
                else if(s[j] == ')') cnt--;
                j++;
            }
            string temp = judge2(s.substr(i + 1, j - i - 2));
            res.push_back(temp[0]);
            i = j - 1;
        }
        i++;
    }
    return string(res.begin(), res.end());
}


int main() {
    string s = "((T&F)|(T&F))";
    cout<<judge2(s)<<endl;
    return 0;
}
