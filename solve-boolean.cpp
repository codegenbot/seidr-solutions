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
    string y;
    cin>>y;
    for(int j=0;j<y.length();j++){
        if(y[j]=='f')
            y[j]='F';
        if(y[j]=='t')
            y[j]='T';
    }
    stack<char> st;
    for(int k=0;k<y.length();k++){
        if(st.size()==0 || st.top()=='(' || y[k]==')')
            st.push(y[k]);
        else{
            if(y[k]=='&' || y[k]=='|'){
                while(st.top()!='(' && st.size()!=0)
                    st.pop();
                st.push(y[k]);
            }
            else if(y[k]=='(')
                st.push(y[k]);
            else if(y[k]==')'){
                while(st.top()!='(' && st.size()!=0)
                    st.pop();
                if(st.size()!=0 && st.top()=='(')
                    st.pop();
            }
            else{
                if(st.top()=='T' && y[k]=='F'){
                        st.push(y[k]);
                    if(st.top()=='&')
                        s[st.size()-1]='F';
                    else if(st.top()=='|')
                        s[st.size()-1]='T';
                        
                }
                else if(st.top()=='F' && y[k]=='F'){
                    if(st.top()=='&')
                        st.pop();
                    else if(st.top()=='|')
                        st.pop();
                }
                else if(st.top()=='F' && y[k]=='T'){
                    if(st.top()=='&')
                        s[st.size()-1]='F';
                    else if(st.top()=='|')
                        s[st.size()-1]='T';   
                }
                else if(st.top()=='T' && y[k]=='T'){
                    if(st.top()=='&')
                        s[st.size()-1]='T';
                    else if(st.top()=='|')
                        s[st.size()-1]='T';
                }
            }
        }
    }
    cout<<st.top();
    return 0;
}
