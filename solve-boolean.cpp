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

bool parseBoolExpr(string expression) {
    stack<char> stk;
    for(int i=0; i<expression.size(); i++){
        if(expression[i]!=')'){
            stk.push(expression[i]);
        }else{
            char c = stk.top();
            stk.pop();
            char op = stk.top();
            stk.pop();
            stk.pop();
            if(op=='&'){
                while(c!='('){
                    if(c=='f'){
                        stk.push('f');
                        break;
                    }
                    c = stk.top();
                    stk.pop();
                }
                if(c=='('){
                    stk.push('T');
                }
            }else if(op=='|'){
                while(c!='('){
                    if(c=='t'){
                        stk.push('T');
                        break;
                    }
                    c = stk.top();
                    stk.pop();
                }
                if(c=='('){
                    stk.push('f');
                }
            }else{
                while(c!='('){
                    if(c=='f'){
                        stk.push('T');
                        break;
                    }
                    c = stk.top();
                    stk.pop();
                }
                if(c=='('){
                    stk.push('f');
                }
            }
        }
    }
    return stk.top()=='T';
}

int main() {
    cout << parseBoolExpr("t");
    return 0;
}
