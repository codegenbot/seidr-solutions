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
t&f
output:
True
*/
int main() {
    string str;
    while(cin>>str){
        stack<char> st;
        for(int i = 0; i < str.size(); ++i){
            if(str[i] == 'f' || str[i] == 't'){
                st.push(str[i]);
            }else if(str[i] == '|'){
                char s1 = st.top();
                st.pop();
                char s2 = st.top();
                st.pop();
                if(s1 == 't' || s2 == 't'){
                    st.push('t');
                }else{
                    st.push('f');
                }
            }else if(str[i] == '&'){
                char s1 = st.top();
                st.pop();
                char s2 = st.top();
                st.pop();
                if(s1 == 't' && s2 == 't'){
                    st.push('t');
                }else{
                    st.push('f');
                }
            }
        }
        if(st.top() == 't'){
            cout<<"True"<<endl;
        }else{
            cout<<"False"<<endl;
        }
    }
    return 0;
}
