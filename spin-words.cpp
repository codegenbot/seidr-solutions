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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
string reverse(string s){
    string res = "";
    for(int i = s.size() - 1; i >= 0; i--){
        res += s[i];
    }
    return res;
}

string reverseWords(string s){
    string res = "";
    string word = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            if(word.size() >= 5){
                res += reverse(word);
            }else{
                res += word;
            }
            res += ' ';
            word = "";
        }else{
            word += s[i];
        }
    }
    if(word.size() >= 5){
        res += reverse(word);
    }else{
        res += word;
    }
    return res;
}

int main() {
    string s;
    getline(cin, s);
    cout<<reverseWords(s)<<endl;
    return 0;
}
