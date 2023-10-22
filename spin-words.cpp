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
string reverse(string &s){
    int i = 0, j = s.size()-1;
    while(i < j){
        swap(s[i++], s[j--]);
    }
    return s;
}
string reverseWords(string &s){
    int i = 0, j = 0, n = s.size();
    while(i < n){
        while(i < n && s[i] == ' ') i++;
        j = i;
        while(j < n && s[j] != ' ') j++;
        if(j - i >= 5){
            string t = s.substr(i, j - i);
            reverse(t);
            s.replace(i, j - i, t);
        }
        i = j;
    }
    return s;
}
int main() {
    string s = "this is a test";
    cout<<reverseWords(s)<<endl;
    
    s = "this is another test";
    cout<<reverseWords(s)<<endl;
    
    s = "hi";
    cout<<reverseWords(s)<<endl;
    
    s = "a";
    cout<<reverseWords(s)<<endl;
    
    s = "";
    cout<<reverseWords(s)<<endl;
    
    s = " ";
    cout<<reverseWords(s)<<endl;
    return 0;
}
